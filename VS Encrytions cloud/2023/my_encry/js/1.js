/**
 * @Author: Dastan_Alam
 * @Date:   30-07-2023 12:47:26 PM       12:47:26
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 30-07-2023 12:47:41 PM       12:47:41
 */
const student = {

    // data property
    firstName: 'Monica',
    
    set setName(v){
        this.firstName=v
    },
    // accessor property(getter)
    get getName() {
        return this.firstName;
    }
};

// accessing data property
console.log(student.firstName); // Monica

student.setName="vinit"
console.log(student.firstName); // Monica

// accessing getter methods
console.log(student.getName); // Monica

// trying to access as a method
// console.log(student.getName()); // error