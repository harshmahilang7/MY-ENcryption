/**
 * @Author: Dastan_Alam
 * @Date:   02-07-2023 11:55:14 AM       11:55:14
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 30-07-2023 04:18:54 PM       16:18:54
 */
const person = {
    name: 'John',
    age: 30,
    
    greet: function() {
        let surname = 'Doe';
        console.log('The name is' + ' ' + this.name + ' ' + surname); }
};

person.greet();