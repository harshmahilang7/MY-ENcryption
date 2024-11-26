/**
 * @Author: Dastan_Alam
 * @Date:   02-07-2023 11:55:14 AM       11:55:14
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 30-07-2023 04:04:00 PM       16:04:00
 */
function a(){
    console.log("this is first block");
    b();
}
function b(){
    console.log("this is second block");
    a();
}
a();