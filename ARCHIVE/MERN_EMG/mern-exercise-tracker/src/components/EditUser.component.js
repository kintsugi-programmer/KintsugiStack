// Import React and Component class
import React, { Component } from 'react';
import withRouter from './withRouter'; // Ensure this is the correct path

// Import axios for HTTP requests
import axios from 'axios';

///////////////////////////////////////////////////////////////////////////////
// CLASS COMPONENT: EditUser
// This component allows editing a user's username.
// It fetches the user based on the username in the URL and updates it via POST.
///////////////////////////////////////////////////////////////////////////////
class EditUser extends Component {
  constructor(props) {
    super(props);

    // Initialize state
    this.state = {
      username: ''
    };

    // Bind methods
    this.onChangeUsername = this.onChangeUsername.bind(this);
    this.onSubmit = this.onSubmit.bind(this);
  }

  /////////////////////////////////////////////////////////////////////////////
  // LIFECYCLE METHOD: componentDidMount()
  // Fetch the existing user using the username from the URL
  /////////////////////////////////////////////////////////////////////////////
  componentDidMount() {
    const oldUsername = this.props.router.params.username;

    axios.get('http://localhost:5000/users/')
      .then(res => {
        const user = res.data.find(u => u.username === oldUsername);
        if (user) {
          this.setState({ username: user.username });
        } else {
          console.log("User not found");
        }
      })
      .catch(err => console.log(err));
  }

  /////////////////////////////////////////////////////////////////////////////
  // EVENT HANDLER: When input field changes, update state
  /////////////////////////////////////////////////////////////////////////////
  onChangeUsername(e) {
    this.setState({ username: e.target.value });
  }

  /////////////////////////////////////////////////////////////////////////////
  // FORM SUBMIT HANDLER: Update username via POST request
  /////////////////////////////////////////////////////////////////////////////
  onSubmit(e) {
    e.preventDefault();

    const updatedUser = {
      username: this.state.username
    };

    const oldUsername = this.props.router.params.username;

    axios.post(`http://localhost:5000/users/update/${oldUsername}`, updatedUser)
      .then(res => console.log(res.data))
      .catch(err => console.log(err));

    // Redirect to user list
    window.location = '/users';
  }

  /////////////////////////////////////////////////////////////////////////////
  // RENDER METHOD: Shows the form with the current username
  /////////////////////////////////////////////////////////////////////////////
  render() {
    return (
      <div>
        <h3>Edit User</h3>
        <form onSubmit={this.onSubmit}>
          {/* USERNAME INPUT FIELD */}
          <div className="form-group">
            <label>New Username: </label>
            <input
              type="text"
              required
              className="form-control"
              value={this.state.username}
              onChange={this.onChangeUsername}
            />
          </div>

          {/* SUBMIT BUTTON */}
          <div className="form-group">
            <input type="submit" value="Update User" className="btn btn-primary" />
          </div>
        </form>
      </div>
    );
  }
}

export default withRouter(EditUser);
