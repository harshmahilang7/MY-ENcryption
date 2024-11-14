/**
 * @Author: Dastan Alam
 * @Date:   2024-10-23 05:42:55 PM   17:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-23 05:42:57 PM   17:10
 */
function add(x,y) {
    return x+y;   
}

// function isprime(n) 
// {
//     let flag=true;
//     for (let i = 2; i < n; i++) {
//         if (n%i==0) {
//             flag=false
//         } 
//     }
//     if(flag==true)
//     {
            
//     }
    
// }
function isprime(n) 
{
    let flag=true;
    for (let i = 2; i <= n/2; i++) {
        if (n%i===0) {
            flag=false
            break
        } 
    }
return flag
// return flag?'prime number':'not a prime numer';
    
}