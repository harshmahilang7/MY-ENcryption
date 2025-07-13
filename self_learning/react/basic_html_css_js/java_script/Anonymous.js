var a=function()
{
    console.log("anonymous function not have named function");
};

a();

(function () {
  console.log("self invoked anonymous function");
})();


function f1(a)
{
a();
}

f1(function() {
    console.log("pass anonymous function in f1 funcion")
    
})