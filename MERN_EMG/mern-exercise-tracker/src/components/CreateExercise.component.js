// Import React and Component for class-based component
import React, { Component } from 'react';

// Import a calendar date-picker component and its CSS for selecting dates
import DatePicker from 'react-datepicker';
import 'react-datepicker/dist/react-datepicker.css';

// Import axios to send HTTP requests (e.g., to fetch or save data)
import axios from 'axios';

// Define and export the CreateExercise component
export default class CreateExercise extends Component {
  constructor(props) {
    super(props);

    // Initialize the component's state
    this.state = {
      username: '',       // Selected username from dropdown
      description: '',    // Text about the exercise
      duration: 0,        // Duration in minutes
      date: new Date(),   // Date of exercise
      users: []           // List of all usernames fetched from server
    };

    // Bind the 'this' keyword to all methods so they work correctly in class component
    this.onChangeUsername = this.onChangeUsername.bind(this);
    this.onChangeDescription = this.onChangeDescription.bind(this);
    this.onChangeDuration = this.onChangeDuration.bind(this);
    this.onChangeDate = this.onChangeDate.bind(this);
    this.onSubmit = this.onSubmit.bind(this);
  }

  // Lifecycle method: runs after the component is first added to the page
  componentDidMount() {
    // Fetch the list of users from the backend
    axios.get('http://localhost:5000/users/')
      .then(res => {
        // If users exist, update the state with usernames
        if (res.data.length > 0) {
          this.setState({
            users: res.data.map(user => user.username), // Get only usernames
            username: res.data[0].username // Set default selected username
          });
        }
      })
      .catch(err => console.log(err)); // Log any error
  }

  // Method to update state when username is changed from dropdown
  onChangeUsername(e) {
    this.setState({ username: e.target.value });
  }

  // Method to update description text
  onChangeDescription(e) {
    this.setState({ description: e.target.value });
  }

  // Method to update duration
  onChangeDuration(e) {
    this.setState({ duration: e.target.value });
  }

  // Method to update the selected date
  onChangeDate(date) {
    this.setState({ date }); // Shorthand for { date: date }
  }

  // Method called when the form is submitted
  onSubmit(e) {
    e.preventDefault(); // Prevent the form from refreshing the page

    // Create an object with current form values
    const exercise = {
      username: this.state.username,
      description: this.state.description,
      duration: this.state.duration,
      date: this.state.date
    };

    console.log(exercise); // Log it to the browser console for debugging

    // Send this data to the backend to store the new exercise log
    axios.post('http://localhost:5000/exercises/add', exercise)
      .then(res => console.log(res.data)); // Log the response

    // Redirect to home page after submission
    window.location = '/';
  }

  render() {
    return (
      <div>
        <h3>Create New Exercise Log</h3>

        {/* Form for adding a new exercise */}
        <form onSubmit={this.onSubmit}>

          {/* Dropdown to choose a user */}
          <div className="form-group">
            <label>Username: </label>
            <select required className="form-control"
              value={this.state.username}
              onChange={this.onChangeUsername}>
              {/* Loop through the users list and show each as an option */}
              {this.state.users.map(user => (
                <option key={user} value={user}>{user}</option>
              ))}
            </select>
          </div>

          {/* Input for description */}
          <div className="form-group">
            <label>Description: </label>
            <input
              type="text"
              required
              className="form-control"
              value={this.state.description}
              onChange={this.onChangeDescription}
            />
          </div>

          {/* Input for duration */}
          <div className="form-group">
            <label>Duration (in minutes): </label>
            <input
              type="number"
              className="form-control"
              value={this.state.duration}
              onChange={this.onChangeDuration}
            />
          </div>

          {/* Date picker for selecting the date */}
          <div className="form-group">
            <label>Date: </label>
            <div>
              <DatePicker
                selected={this.state.date}
                onChange={this.onChangeDate}
              />
            </div>
          </div>

          {/* Submit button */}
          <div className="form-group">
            <input
              type="submit"
              value="Create Exercise Log"
              className="btn btn-primary"
            />
          </div>

        </form>
      </div>
    );
  }
}