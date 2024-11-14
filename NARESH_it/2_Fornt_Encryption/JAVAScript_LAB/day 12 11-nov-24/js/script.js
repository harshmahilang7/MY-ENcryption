/**
 * @Author: Dastan Alam
 * @Date:   2024-11-11 11:50:08 AM   11:11
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-11-11 12:39:05 PM   12:11
 */
'use strict';

const data=
{
    q1:
    {
        question:"1) Which type of JavaScript language is ___",
        op1:"Object-Oriented",
        op2:"Object-Based",
        op3:"Assembly-language",
        op4:"High-level"
    },
    q2:
    {
        question:"2) Which one of the following also known as Conditional Expression:",
        op1:"Alternative to if-else",
        op2:"Switch statement",
        op3:"If-then-else statement",
        op4:"immediate if"
    },
};

const q=[q1,q2,q3,q4,q5];
count=1;
ifcount=`data.q$[count].question`
document.addEventListener("DOMContentLoaded", function() 
{
        if (ifcount) {
            const questionElement = document.createElement('h2');
            questionElement.innerHTML = ifcount;
            Ques.appendChild(questionElement);
        }
});