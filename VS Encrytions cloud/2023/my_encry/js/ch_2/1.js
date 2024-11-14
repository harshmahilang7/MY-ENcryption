/**
 * @Author: Dastan_Alam
 * @Date:   15-07-2023 05:35:55 PM       17:35:55
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 15-07-2023 05:36:02 PM       17:36:02
 */
/**
 * @Author: Dastan_Alam
 * @Date:   15-07-2023 04:02:36 PM       16:02:36
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 15-07-2023 05:34:53 PM       17:34:53
 */
const prompt=require("prompt-sync")({sigint:true});

// let age = parseInt(prompt('Enter a number: '));
// age+=1;
// console.log(`the age is ${age}`)


// n=0;
// while (n<10) {
//     console.log(`vinit ${n}`);
//     n++;
// }

// n=0;
// do{
//     console.log(`${n}`)
//     n++;
// }while(n<100)

// arry=Array("a","e","i","o","u")
// arry=["a","e","i","o","u"]
// console.log(arry[3])
// a={
//     "1":"one",
//     "2":"two",
//     "3":"three"
// }
// // for(i in arry){
// //     console.log(arry[i])
// // }

// // for ([k,v] of Object.entries(a)) {
// //     console.log(k+v)
// // }

// b=Object({
//     1:"tone",
//     2:"nigt",
//     3:"ouy"
// })

// console.log(b)


// a=["a","e","i","o","u"]

// a.forEach(fun)

// function fun(val,index){
//     console.log(a)
// }
// const { sqrt } = require('mathjs')

a=[2,4,6,8]

// b=a.map(i=>{
//     console.log(i)
    
// });
b=a.map(Math.sqrt)
console.log(b)