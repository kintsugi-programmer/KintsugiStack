import React from "react";

// Corrected props destructuring
const MovieCard = ({ movie }) => {
  return (
    <div className="movie">
      <h2>{movie.Title}</h2>
      <h3>{movie.Year}</h3>
      <img src={movie.Poster !== 'N/A' ? movie.Poster : 'https://via.placeholder.com/400'} alt={movie.Title} />
    </div>
  );
}

export default MovieCard;
