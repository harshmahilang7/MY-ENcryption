/**
 * @Author: Dastan_Alam
 * @Date:   06-07-2023 11:19:00 AM       11:19:00
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 06-07-2023 11:59:58 AM       11:59:58
 */



// Q1 add  number into string
let s="vinit";
let n=45;
let add=s+n;
console.log(add)


// Q2 type of "add" in last questions
console.log(typeof add)

// q3

// let
let obj1={
    "one" : "vinit",
    two : "parth"
}
// obj1=1   
// console.log(obj)
// constant can be change thus it cannot replace with number 
// but if it is in "let" then it can posible



// const 
const obj={
    "one" : "vinit",
    two : "parth"
}

// but we can change value whivh is inside the block
obj["one"]=1;
obj["two"]=2;

console.log(obj)

 // for empty 
 // lt will run in "let" 
// obj1={}
// console.log(obj1)



//Q4 add newkey on constant object

obj["new_key"]="new_val"
console.log(obj)


// Q5 wap word-meaning of 5 word 

const word={
    
    aditya:"xyz",
    kashish:"jhakli",
    deep:"xxx",
    parth:"incosent",
}

console.log(word["aditya"],word["kashish"])