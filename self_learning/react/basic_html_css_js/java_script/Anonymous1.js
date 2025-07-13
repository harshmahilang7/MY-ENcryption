function f1(a,b) 
{
    a('sachin');
    b();
    return function() 
    {
        alert("kohli");        
    }
}


var x=f1(
    function(name) 
    {
        alert(name);
    },
    function() 
    {
        alert("dhoni");
    }
)
x()

// run on browser only 