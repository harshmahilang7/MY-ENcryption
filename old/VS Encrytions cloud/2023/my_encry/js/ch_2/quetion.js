/**
 * @Author: Dastan_Alam
 * @Date:   13-07-2023 10:49:06 AM       10:49:06
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 15-07-2023 04:03:01 PM       16:03:01
 */
// npm install prompt-sync
const prompt=require("prompt-sync")({sigint:true});

// 10 se 20 beach pe

let age = parseInt(prompt('Enter a number: '));
if (age>10 && age<20)
{
    console.log("lies on 10 to 20");
}
else 
{
    console.log("not lies on 10 to 20");
}


// use switch case in javascript

var val=prompt("enter the value");

switch (val)
{
    case "1":
        console.log("one");
        break;
    case "2":
        console.log("two")
        break;
    case "3":
        console.log("three")
        break;
    default:
        console.log("ivalid")
    
}

// wap number divde by 2 and 3

let num =prompt("enter a number");

if (num%2==0 && num%3==0){
    console.log("divde by 2 and 3 both")
}
else{
    console.log("not divde by 2 and 3 both")
}

// wap number divde by 2 or 3

let num=prompt("enter a number");

if (num%2==0 || num%3==0){
    console.log("divde by 2 or 3")
}
else{
    console.log("not divde by 2 or 3")
}

// if you are above 18 the print you can drive if not then print you cant drive
// usnig turnary opetartor

let drive_age=prompt("enter the age");

(drive_age<18)?console.log("you cant drive"):console.log("you can drive");

console.log((drive_age<18)?"you cant drive":"you can drive");