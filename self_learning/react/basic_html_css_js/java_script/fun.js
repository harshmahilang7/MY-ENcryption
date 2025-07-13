// function sum(x,y)
// {
//     console.log(x+y);
// }
// sum(9,9);

function sum(x, y) {
  console.log(x + y);
}
sum(9, 9);  // with the name funtion call it 



function fun() {
  console.log(this);
}
fun();  // with the name funtion call it 


// 2 call apply and bind
fun.call({x:10});
fun.apply({ x: 10 });
fun.bind({ x: 10 });

function sum1(x, y) {
  console.log(x + y+this.no);
}
sum1.call({no: 10},10,20)
   //  this paramerter ,x,y  
sum1.apply({ no: 10 }, [10, 20]);  
 //  this parameter  , array
sum1.bind({ no: 10 },10,20)();   //-> return funtion in last me call same method 