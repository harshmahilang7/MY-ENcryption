// import { useState } from 'react'
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
import './App.css'
import Header from './Header';
import Home from "./Home";
import About from "./About";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";

function App() {
 

  return (
    <>
      <h1>hiiii</h1>
      <Header/>
      <Routes>
        <Route path="" element={<Home />}></Route>

        <Route path="About" element={<About />}>
        
        <Route path="About" element={<About />}</Route>
        </Route>
      </Routes>
      <h1>byeee</h1>
    </>
  );
}

export default App
