import { useState } from "react";
import './App.css'

function App() {
  const [c,setCount]=useState(0);

  function mis() 
  {
    setConut(c+1);
  }

  return (
    <>
      <div>
        <h1>{c}</h1>
        <button onClick={mis()}> increse </button>
      </div>
    </>
  );
}

export default App


