// Importing React and Component class to create a class-based component
import React, { Component } from 'react';

// Importing Link from react-router-dom to enable client-side navigation (edit links)
import { Link } from 'react-router-dom';

// Importing axios to make HTTP requests (GET, DELETE)
import axios from 'axios';

//////////////////////////////////////////////////////////////////////////////
// Functional Component: Exercise
// This is a **stateless functional component** used to render each exercise row.
// It receives props (data + delete function) and displays the fields in a table row.
//////////////////////////////////////////////////////////////////////////////
const Exercise = (props) => (
  <tr>
    <td>{props.exercise.username}</td>               {/* Username of person who logged exercise */}
    <td>{props.exercise.description}</td>            {/* Description of the exercise (e.g. Running) */}
    <td>{props.exercise.duration}</td>               {/* Duration in minutes */}
    <td>{props.exercise.date.substring(0, 10)}</td>  {/* Trim date to first 10 chars (YYYY-MM-DD) */}
    <td>
      {/* Link to edit page using the _id from MongoDB document */}
      <Link to={`/edit/${props.exercise._id}`}>edit</Link> | 

      {/* Delete button: Calls deleteExercise function passed as prop */}
      <a href="#!" onClick={() => { props.deleteExercise(props.exercise._id) }}>delete</a>
    </td>
  </tr>
);

//////////////////////////////////////////////////////////////////////////////
// Class Component: ExerciseList
// This component is responsible for:
// 1. Fetching exercises from backend on mount
// 2. Rendering the table of exercises
// 3. Deleting an exercise and updating UI
//////////////////////////////////////////////////////////////////////////////
export default class ExerciseList extends Component {
  constructor(props) {
    super(props);

    // Binding 'this' context for the deleteExercise method
    this.deleteExercise = this.deleteExercise.bind(this);

    // Component state holds an array of all exercise objects
    this.state = {
      exercises: []
    };
  }

  ////////////////////////////////////////////////////////////////////////////
  // Lifecycle Method: componentDidMount()
  // Runs automatically after the component is rendered (mounted)
  // Fetches the list of exercises from the backend API using axios
  ////////////////////////////////////////////////////////////////////////////
  componentDidMount() {
    axios.get('http://localhost:5000/exercises/')
      .then(res => {
        // On success, update the exercises array in state
        this.setState({ exercises: res.data });
      })
      .catch(err => {
        // On error, print the error to the console
        console.log(err);
      });
  }

  ////////////////////////////////////////////////////////////////////////////
  // Method: deleteExercise
  // Deletes an exercise from the database and updates the UI
  // @param {string} id - ID of the exercise to delete
  ////////////////////////////////////////////////////////////////////////////
  deleteExercise(id) {
    // Send DELETE request to backend
    axios.delete(`http://localhost:5000/exercises/${id}`)
      .then(res => console.log(res.data)) // Log server response

    // Update UI by removing the deleted item from state without reloading
    this.setState({
      exercises: this.state.exercises.filter(el => el._id !== id)
    });
  }

  ////////////////////////////////////////////////////////////////////////////
  // Method: exerciseList
  // Returns a list of <Exercise /> components, one for each item in the state
  ////////////////////////////////////////////////////////////////////////////
  exerciseList() {
    return this.state.exercises.map(currentexercise => {
      return (
        <Exercise
          exercise={currentexercise}                 // Pass data to child
          deleteExercise={this.deleteExercise}       // Pass delete handler to child
          key={currentexercise._id}                  // Unique key for efficient rendering
        />
      );
    });
  }

  ////////////////////////////////////////////////////////////////////////////
  // Render Method
  // This returns the JSX that defines the structure of the component UI
  ////////////////////////////////////////////////////////////////////////////
  render() {
    return (
      <div>
        <h3>Logged Exercises</h3>
        <table className="table">
          <thead className="thead-light">
            <tr>
              <th>Username</th>
              <th>Description</th>
              <th>Duration</th>
              <th>Date</th>
              <th>Actions</th> {/* For edit & delete buttons */}
            </tr>
          </thead>
          <tbody>
            { this.exerciseList() } {/* Render list of exercises */}
          </tbody>
        </table>
      </div>
    );
  }
}
