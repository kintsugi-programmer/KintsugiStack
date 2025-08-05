import './App.css';
import React, { useState, useEffect } from 'react';
import MovieCard from './MovieCard';

// Component to display a person's name
const Person = () => {
  return (
    <h2>My name is Rahul</h2>
  );
};

const APIURL = 'https://www.omdbapi.com?apikey=eb86c609';

// Component to display a person's name with props
const Person1 = ({ name, name2 }) => {
  return (
    <h2>My name is {name} {name2}</h2>
  );
};

const movie1 = {
  "Title": "The Batman",
  "Year": "2022",
  "imdbID": "tt1877830",
  "Type": "movie",
  "Poster": "https://m.media-amazon.com/images/M/MV5BOGE2NWUwMDItMjA4Yi00N2Y3LWJjMzEtMDJjZTMzZTdlZGE5XkEyXkFqcGdeQXVyODk4OTc3MTY@._V1_SX300.jpg"
}

// Component to fetch and display movies
const Movies = () => {
  const [movies, setMovies] = useState([]);
  const [searchTerm, setSearchTerm] = useState(''); // New state to store search term

  // Fetch data from API
  const fetchData = async (title) => {
    try {
      const response = await fetch(`${APIURL}&s=${title}`);
      const data = await response.json();
      setMovies(data.Search);
    } catch (error) {
      console.error('Error fetching data:', error);
    }
  };

  // Handle search button click
  const handleSearch = () => {
    fetchData(searchTerm); // Trigger fetchData with the current search term when button is clicked
  };

  return (
    <div className="movies">
      <h1>Movies API</h1>
      <div className="search">
        <input
          type="text"
          placeholder="Search..."
          value={searchTerm}
          onChange={(e) => setSearchTerm(e.target.value)}
        />
        <button onClick={handleSearch}>Search</button>
      </div>
      <div className="movie-list">
        {/* Conditional rendering for fetched movies */}
        {movies?.length > 0 ? (
          movies.map((movie) => (
            <MovieCard key={movie.imdbID} movie={movie} />
          ))
        ) : (
          <p>No movies found</p>
        )}
      </div>
    </div>
  );
};

// Main App component
const App = () => {
  const [count, setCount] = useState(0);

  useEffect(() => {
    alert('useEffect');
    setCount(101);
  }, []);

  const name = "Rahul";
  const x = false;

  return (
    <div className="App">
      The reason the useEffect alert is popping up twice on page reload is likely due to React's Strict Mode in development mode. In React 18, the Strict Mode intentionally renders components twice during development (not in production) to help identify potential side effects and other issues. This causes the useEffect to run twice when the component mounts.
      <hr />
      <h1>Hello world</h1>
      <hr />

      <p>2 + 3 = {2 + 3}</p>
      <p>My name is {name}</p>
      <p>My name is {x ? name : "Bali"}</p>

      {/* Conditional rendering with ternary operator */}
      {name ? (
        <p>test1</p>
      ) : (
        <p>test2, there is no name</p>
      )}
      <hr />

      {/* Render Person component */}
      <Person />
      <hr />

      {/* Render Person1 component with different props */}
      <Person1 name="Rahul" />
      <Person1 name="Siddhant" name2="Bali" />
      <hr />

      {/* Buttons to handle alerts and count */}
      <button onClick={() => alert('clicked')}>Click</button>
      <button onClick={() => setCount(count + 1)}>+</button>
      <button onClick={() => setCount(count - 1)}>-</button>
      <p>{count}</p>
      <button onClick={() => setCount(0)}>Reset</button>
      <button onClick={() => setCount(60)}>60</button>

      <hr />
      <p>{movie1.Title}</p>
      <p>{movie1.Year}</p>
      <img src={movie1.Poster !== 'N/A' ? movie1.Poster : 'https://via.placeholder.com/400'} alt={movie1.Title} />
      <p>{movie1.imdbID}</p>
      <hr />
      {/* Render MovieCard component */}
      <MovieCard movie={movie1} />
      <hr />

      {/* Render Movies component */}
      <Movies />
    </div>
  );
};

export default App;
