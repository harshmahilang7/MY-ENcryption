// let n = 0;

// n = "string"
//1) Named Function.
// function myFunction() {
//   //Declaration
//   //function is keyword to create a function
//   //function is called as function object
//   //reference type data types

//   console.log("A function");
//   // Function Body
// }

// myFunction(); //Function Calling
// // console.log(typeof myFunction);

// 2) function expression

// const ref = function () {
//   console.log("Function Exression");
// };

// ref();

// 3) Arrow function.
// const ref = () => {
//   console.log("Arrow function");
// };
// ref();

// function parameters
// function myFunction(a = 0, b = 0) {
//   console.log(a + b);
// }

// myFunction(20, 20);

// const ref = function(a, b){
//     console.log(a+b);
// }

// ref(10,20);

// function myFunction(a, b, ...c) {
//   console.log(c);
// }

// myFunction(10, 15, 20, 30, 40);
//Higher order function / iife
(function myFunction() {
  console.log("Function Executed");
})();

// myFunction();
