// normal func in js
function sum(a,b) {return (a+b);} // this fucntion is just defined rn; not run; not syntax checked untill run

console.log(sum(5,6)); // now it's called, syntax logic check starts and function now executed
// 11

console.log(sum("a",6)); // this sum function now did string concatnation
// a6

// parseInt method
// it takes out first int from string and return, condition "122asdasdasd", "122" are allowed; "as111" not work; "121asass1222" will return 121
function sumIntOnly(a,b){return (parseInt(a)+parseInt(b))};

console.log(sum("122sds",0)); 
//122sds0
console.log(sumIntOnly("122sds999",0)); 
//122
console.log(sumIntOnly("a122sds",0)); 
//NaN
console.log(sumIntOnly("122",78)); 
//200

// Synchronous Code 
// executed line by line
// may become bottl

