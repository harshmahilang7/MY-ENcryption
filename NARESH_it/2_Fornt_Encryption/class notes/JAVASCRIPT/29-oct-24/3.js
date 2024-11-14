/**
 * @Author: Dastan Alam
 * @Date:   2024-10-29 05:44:14 PM   17:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-29 05:44:57 PM   17:10
 */
'use strict';
/**
 * @Author: Dastan Alam
 * @Date:   2024-10-29 05:18:26 PM   17:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-29 05:29:38 PM   17:10
 */
'use strict';

// example on non - param constructor
function Book(title,author,price,year) {
    //prop init
    this.title=title;
    this.author=author;
    this.price=price;
    this.year=year;
//method
    this.getBook=function(){
        document.write(`${this.title} &nbsp;${this.author} &nbsp;${this.price} &nbsp;${this.year} &nbsp;<br>`)
    }
    
}