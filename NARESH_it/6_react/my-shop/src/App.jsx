

import './App.css'
import Product from './compoents/Product'

function App() {
  
  function display(n) {
    console.log("name is "+n)
  }
  return (
    <div>
      <h1>Products</h1>
      <div className='products'>
       {products.map((p) => (
<Product title={p.title} price={p.price} image={p.image} display={display}/> 
 ))
}    
       
      </div>
    </div>
  )
}

export default App



