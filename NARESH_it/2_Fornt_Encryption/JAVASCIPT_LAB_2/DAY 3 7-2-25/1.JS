/**
 * @Author: Dastan Alam harsh mahilang
 * @Date:   2025-02-07 10:00:25 AM   10:02
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2025-02-07 10:22:30 AM   10:02
 */




'use strict';

let string="123af";
console.log(string);

let n = Number(string);
console.log(n);
console.log(isNaN(n));
console.log(isFinite(n));              // infity

let y=Infinity;
console.log(isFinite(y));               // infinity 

let strArr=string.split("");
console.log(strArr);

let strArrjoin=string.split("").join();
console.log(strArrjoin);
