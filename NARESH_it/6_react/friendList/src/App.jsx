import React from 'react'
import './App.css'
import { useState } from 'react'

function App() {

const[value,setValue]= useState('');
const [friends, setfriends] = useState(["harsh","dastan","ishan","adi"]);
  
function handerDelete(ind) 
{
  setfriends(friends.filter((v,i)=> i!=ind));
  console.log(friends)
}



return (
    <React.Fragment>

      <div className="main">
        <div className="input">
          <input type="text" name="" id="" value={value} onChange={(e)=>setValue(e.target.value)}/>
          <button onClick={()=> setfriends([...friends,value])}>add</button>
        </div>
        <div className="list">
          {friends.map((v, i) => (
            <div className="friend">
              <span>{v}</span>
              <button onClick={()=>handerDelete(i)}>X</button>
            </div>
          ))}
        </div>
      </div>
    </React.Fragment>
  );
}

export default App
