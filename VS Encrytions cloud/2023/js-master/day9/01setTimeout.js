/**
 * @Author: Dastan_Alam
 * @Date:   02-07-2023 11:55:14 AM       11:55:14
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 02-07-2023 12:07:25 PM       12:07:25
 */
// // program to display a text using setTimeout method
// function greet() {
//     console.log('Hello world');
// }

// setTimeout(greet, 3000);
// console.log('This message is shown first');

// program to display time every 3 seconds
function showTime() {

    // return new date and time
    let dateTime= new Date();

    // returns the current local time
    let time = dateTime.toLocaleTimeString();

    console.log(time)

    // display the time after 3 seconds
     setTimeout(showTime, 3000);
}

// calling the function
showTime();