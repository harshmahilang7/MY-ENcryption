/**
 * @Author: Dastan_Alam
 * @Date:   02-07-2023 11:55:14 AM       11:55:14
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 15-07-2023 03:51:10 PM       15:51:10
 */
// program to print a text
// declaring a function
function greet() {
    console.log("Hello there!");
}

// calling the function
greet();

// program to print the text
// declaring a function
function greet(name) {
    console.log("Hello " + name + ":)");
}

// variable name can be different
let name1 = prompt("Enter a name: ");

// calling function
greet(name1);


// program to add two numbers using a function
// declaring a function
function add(a, b) {
    console.log(a + b);
}

// calling functions
add(3,4);
add(2,9);