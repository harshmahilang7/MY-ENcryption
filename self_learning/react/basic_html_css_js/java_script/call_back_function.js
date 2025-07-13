function f1(a)    //  higher order function 
{
    a();
}
function f2()    // call back function
{
    console.log("call back funtion");
}

f1(f2);