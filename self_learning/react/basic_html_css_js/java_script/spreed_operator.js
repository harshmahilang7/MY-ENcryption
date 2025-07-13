var obj1={
    n1:10,
    n2:20
}
var obj2={
    n3:30,
    n4:40
}

var output={
    ...obj1,...obj2
}

console.log(output)

// { n1: 10, n2: 20, n3: 30, n4: 40 }

var arr = [10, 20, 30, 40];
var arr1 = [10, 20, 30, 40];

var o=[...arr,...arr1];
console.log(o);