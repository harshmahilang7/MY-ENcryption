import React from 'react'

export default function Child({title='vijay' ,num=0}) {
  return (
    <div>
      <h1>{title}</h1>
      <h2>{num}</h2>
    </div>
  )
}
