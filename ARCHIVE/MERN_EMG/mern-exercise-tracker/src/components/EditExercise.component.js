// Import React and Component class for creating a class-based component
import React, { Component } from 'react';
import withRouter from './withRouter'; // adjust path as needed

// Import DatePicker component and its styles
import DatePicker from 'react-datepicker';
import 'react-datepicker/dist/react-datepicker.css';

// Import axios to make HTTP requests
import axios from 'axios';

///////////////////////////////////////////////////////////////////////////////
// CLASS COMPONENT: EditExercise
// This component fetches an existing exercise entry from the server,
// allows the user to edit it using a form, and updates it via a POST request.
///////////////////////////////////////////////////////////////////////////////
class EditExercise extends Component {
  constructor(props) {
    super(props);

    // Initialize the component state with default values
    this.state = {
      username: '',        // Selected user
      description: '',     // Description of exercise
      duration: 0,         // Duration in minutes
      date: new Date(),    // Date of the exercise
      users: []            // List of usernames for dropdown
    };

    // Bind `this` context to event handlers
    this.onChangeUsername = this.onChangeUsername.bind(this);
    this.onChangeDescription = this.onChangeDescription.bind(this);
    this.onChangeDuration = this.onChangeDuration.bind(this);
    this.onChangeDate = this.onChangeDate.bind(this);
    this.onSubmit = this.onSubmit.bind(this);
  }

  /////////////////////////////////////////////////////////////////////////////
  // LIFECYCLE METHOD: componentDidMount()
  // Runs after the component is inserted into the DOM
  // Fetches the existing exercise data to populate the form
  /////////////////////////////////////////////////////////////////////////////
  componentDidMount() {
    // Fetch the specific exercise using the ID from URL params
    axios.get(`http://localhost:5000/exercises/${this.props.router.params.id}`)
      .then(res => {
        // Update state with exercise data
        this.setState({
          username: res.data.username,
          description: res.data.description,
          duration: res.data.duration,
          date: new Date(res.data.date) // Convert to JS Date object
        });
      })
      .catch(err => console.log(err)); // Handle any error

    // Fetch list of all users to populate the dropdown
    axios.get('http://localhost:5000/users/')
      .then(res => {
        // If user list is not empty, extract usernames into the users array
        if (res.data.length > 0) {
          this.setState({
            users: res.data.map(user => user.username)
          });
        }
      })
      .catch(err => console.log(err)); // Handle error
  }

  // Event handler: update username in state
  onChangeUsername(e) {
    this.setState({ username: e.target.value });
  }

  // Event handler: update description in state
  onChangeDescription(e) {
    this.setState({ description: e.target.value });
  }

  // Event handler: update duration in state
  onChangeDuration(e) {
    this.setState({ duration: e.target.value });
  }

  // Event handler: update date in state
  onChangeDate(date) {
    this.setState({ date: date });
  }

  /////////////////////////////////////////////////////////////////////////////
  // FORM SUBMIT HANDLER
  // Called when the form is submitted. Sends the updated exercise data
  // to the server using POST request and redirects back to homepage
  /////////////////////////////////////////////////////////////////////////////
  onSubmit(e) {
    e.preventDefault(); // Prevent page refresh

    const exercise = {
      username: this.state.username,
      description: this.state.description,
      duration: this.state.duration,
      date: this.state.date
    };

    console.log('Submitting updated exercise:', exercise);

    // Send POST request to update the exercise on the backend
    axios.post(`http://localhost:5000/exercises/update/${this.props.router.params.id}`, exercise)
      .then(res => console.log(res.data));

    // Redirect to home page after submit
    window.location = '/';
  }

  /////////////////////////////////////////////////////////////////////////////
  // RENDER METHOD
  // Returns JSX that renders the form pre-filled with current values
  /////////////////////////////////////////////////////////////////////////////
  render() {
    return (
      <div>
        <h3>Edit Exercise Log</h3>
        <form onSubmit={this.onSubmit}>
          {/* USERNAME DROPDOWN */}
          <div className="form-group">
            <label>Username: </label>
            <select
              required
              className="form-control"
              value={this.state.username}
              onChange={this.onChangeUsername}
            >
              {this.state.users.map(user => (
                <option key={user} value={user}>{user}</option>
              ))}
            </select>
          </div>

          {/* DESCRIPTION INPUT */}
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

          {/* DURATION INPUT */}
          <div className="form-group">
            <label>Duration (in minutes): </label>
            <input
              type="number"
              className="form-control"
              value={this.state.duration}
              onChange={this.onChangeDuration}
            />
          </div>

          {/* DATE PICKER */}
          <div className="form-group">
            <label>Date: </label>
            <div>
              <DatePicker
                selected={this.state.date}
                onChange={this.onChangeDate}
              />
            </div>
          </div>

          {/* SUBMIT BUTTON */}
          <div className="form-group">
            <input type="submit" value="Update Exercise Log" className="btn btn-primary" />
          </div>
        </form>
      </div>
    );
  }
}

export default withRouter(EditExercise);
