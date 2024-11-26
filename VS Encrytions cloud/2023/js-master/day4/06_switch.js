/**
 * @Author: Dastan_Alam
 * @Date:   02-07-2023 11:55:14 AM       11:55:14
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 11-07-2023 10:14:24 PM       22:14:24
 */
// program using switch statement
let a = 5;

switch (a) {

    case 1:
        a = 'one';
        break;
    case 2:
        a = 'two';
        break;
    case 3:
        a = 'three';
        break;
    default:
        a = 'not found';
        break;
}
console.log(`The value is ${a}`);