/**
 * @Author: Dastan_Alam
 * @Date:   02-07-2023 11:55:14 AM       11:55:14
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 15-07-2023 05:37:07 PM       17:37:07
 */
// function myname(name, ...args) {
//   console.log(name, args[(0, 2)]);
// }
// myname("saurabh", "john", "vihul", "mee");

const myfunct = function (a, b, ...args) {
  console.log(` ${a} ${b} ${args[1]}`);
};
myfunct(2, 4, 5, 6, 7, 8);
