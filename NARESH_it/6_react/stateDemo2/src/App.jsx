import './App.css'
import { useState } from 'react';

function App() {

  const[naval,setNaValue]= useState('');

  const [grocery,setGrocery] =useState([]);
  
  function addMyData(e) {
    // console.log(e.target.value);
    setNaValue(e.target.value);
  }
  
  function handleClick() 
  {
    setGrocery([...grocery,naval]);
    setNaValue('');

    // grocery.push(naval);
    // setGrocery(grocery);

  }
  return (
    <>
      <h1>Grocery list</h1>
      <input type="text" placeholder="enter the name" onChange={addMyData}/>
      <button onClick={handleClick}>add</button>
      <p>{naval}</p>
       <div className='grocesies'>
        {
          grocery.map((v) =>(
            <>
            <p>{v}</p> 
            <button>X</button>
            </>
          ))
        }
      </div> 
    </>
  )
}

export default App
