// <!-- 
//   @Author: Dastan Alam
//   @Date:   2024-10-25 04:25:52 PM   16:10
//   @Last Modified by:   Dastan Alam
//   @Last Modified time: 2024-10-25 05:14:23 PM   17:10
// -->
// <script>
// a/f w/o 
  //AF with params & exp return
  const add = (x, y) => {
    return x + y;
  };

  //AF with params and imp return
  //const product =(x,y)=> x*y;     //no need to write return it auto return inpcitly return

  // it you have single paramerte  so no need of parapeter
  const square = (x) => x * x;
  const sq = (x) => x * x;
  //  both are valid

  //AF 1 param & imp return
  const area = (r)=>{
    return Math.PI*r**2;
  }


function myfun() {
  document.write("hello i am arrow fuction");
  

}
// ()=>{document.write("hello i am arrow fuction");}

(function (x,y) {
})(10,20);

