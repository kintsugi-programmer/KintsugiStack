// withRouter.js
import { useParams, useNavigate, useLocation } from 'react-router-dom';
import React from 'react';

export default function withRouter(Component) {
  function ComponentWithRouterProp(props) {
    const params = useParams();
    const navigate = useNavigate();
    const location = useLocation();

    return (
      <Component
        {...props}
        router={{ params, navigate, location }} // 👈 attach to `router`
      />
    );
  }

  return ComponentWithRouterProp;
}



// REASON
// React Router v6+ does not provide this.props.match directly.
// To fix this, wrap your class component using a small withRouter HOC (Higher Order Component) to pass the params manually

// old rejected
// this.props.match.params.id

// new 

// import { useParams } from 'react-router-dom';

// const MyComponent = () => {
//   const { id } = useParams();
//   return <div>ID: {id}</div>;
// };
