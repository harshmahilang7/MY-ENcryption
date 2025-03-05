import { useEffect, useState } from 'react'
import './App.css'

function App() {
  const [count, setCount] = useState(0);

  const [count2, setCount2] = useState(5);

  // useEffect(function () {
  //   console.log("hii");
  // },);

  // it call every time when stATE CHANGE

  // useEffect(function () {
  //   console.log("hii");
  // }, []);

  // []  one time call

  // useEffect(function () {
  //   console.log("hii");
  // }, [count]);          -> only update count update it call
  //

  useEffect(function () {
    setTimeout(() => {
      console.log("i will run");
    }, 5000);
  }, [count]);

  return (
    <>
      <p>{count}</p>
      <button onClick={() => setCount(count + 1)}>+</button>

      <p>{count2}</p>
      <button onClick={() => setCount2(count2 - 1)}>-</button>
    </>
  );
}

export default App
