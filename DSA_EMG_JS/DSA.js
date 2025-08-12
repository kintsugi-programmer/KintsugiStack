// ## Need of DSA
// eg1: search person in arr
console.log("eg1");
const eg1empDb = ['bali','bhati','bhaskar','rijusmit'];
const eg1findEmp = (db,person) => {
    for(let i=0; i<db.length;i++){
        if(db[i]===person){console.log(`Found ${person} at ${i}th index!!!`)}
    }
};
eg1findEmp(eg1empDb,"bhaskar");
eg1findEmp(eg1empDb,"richa");

// now even if we find bhaskar early, still it would check === with rest of array
// now this eg1empDb is our data structure
// & eg1findEmp is our Algorithm 

// bali-king@war-machine:~/BaliGit/KintsugiStack$ node "/home/bali-king/BaliGit/KintsugiStack/DSA_EMG_JS/DSA.js"
// eg1
// Found bhaskar at 2th index!!!
// bali-king@war-machine:~/BaliGit/KintsugiStack$ 

// O(n)

// eg2: ATM Machine
console.log("eg2");
const eg2cashDb = [5,10,20,50,100,500];
const eg2findCash = (db,index) => db[index];
console.log(eg2findCash(eg2cashDb,4));
// here we don't care how big is data ;)

// eg2
// 100

// O(1)

// eg3: print pairs, [i,j] where i<j , no order matter
console.log("eg3");
const eg3arr = [0,1,2,3,4,5];
const eg3pairsPrint= (arr) => {
    for (let i =0; i<arr.length; i++){
        for (let j =i+1; j<arr.length; j++){
            console.log(` [ ${arr[i]}, ${arr[j]} ] `);
    
        }
        // O(n)
    }
    // O(n)

    // faltu, "NoContextJargonToProveAPoint"
    for (let i =0; i<arr.length; i++){ console.log(` [ ${arr[i]}, ${arr[i]} ] `);}
    // O(n)
};
eg3pairsPrint(eg3arr);
// nested loop

// eg3
//  [ 0, 1 ] 
//  [ 0, 2 ] 
//  [ 0, 3 ] 
//  [ 0, 4 ] 
//  [ 0, 5 ] 
//  [ 1, 2 ] 
//  [ 1, 3 ] 
//  [ 1, 4 ] 
//  [ 1, 5 ] 
//  [ 2, 3 ] 
//  [ 2, 4 ] 
//  [ 2, 5 ] 
//  [ 3, 4 ] 
//  [ 3, 5 ] 
//  [ 4, 5 ] 
//  [ 0, 0 ] 
//  [ 1, 1 ] 
//  [ 2, 2 ] 
//  [ 3, 3 ] 
//  [ 4, 4 ] 
//  [ 5, 5 ] 

// O(n*n) + O(n) = O(n^2)

// If we combine all the "O" operations it becomes O(n^2 + n)
// O(n^2) is a Dominant term BOTTLENECK
// "n" is a Non-Dominant term
// So we remove the "non-dominant" term and we're only left with O(n^2)
// This way, we simplify our bigO

// O(n^2)

// eg4 : Array DS in JS
console.log('eg4')
const eg4stringArr = ["a","b","c"]; //string
const eg4numArr = [1,2,3,4]; //number
const eg4boolArr = [true,false,false,true]; //bool
const eg4mixedArr = ["a",2,true,undefined,null,{c:"c"},["d"]];
console.log(eg4stringArr,eg4numArr,eg4boolArr,eg4mixedArr);
// these are premitive arrays

// eg4
// [ 'a', 'b', 'c' ] [ 1, 2, 3, 4 ] [ true, false, false, true ] [ 'a', 2, true, undefined, null, { c: 'c' }, [ 'd' ] ]

// eg5 : Custom Array
console.log('eg5');
class eg5CustomArray {
    constructor(){// initialize :)
        this.length = 0;
        this.data = {} ;
    }

    // custom operations
    // append
    push(element){
        // this.data+=element; // NO
        this.data[this.length]=element;
        this.length++;
        console.log(this.data);
    }

    // access
    get(index){
        // index
        return this.data[index];
    }

    // remove element from last
    pop(){
        const lastElement =this.get(this.length-1);
        delete this.data[this.length-1]; //IMP
        this.length--;
        return lastElement;
    }

    // remove element from first
    shift(){
        const firstElement = this.get(0);
        for ( let i=0; i<this.length && i+1 !== this.length; i++){
            this.data[i]=this.data[i+1];
        }
        this.pop();
        return firstElement;

    }

    // delete by index
    delete(index){
        const indexElement = this.data[index];
        for ( let i=index; i<this.length && i+1 !== this.length; i++){
            this.data[i]=this.data[i+1];
        }
        this.pop();
        return indexElement;
    }
}

const eg5MyNewArray = new eg5CustomArray();
console.log(eg5MyNewArray); //eg5CustomArray { length: 0, data: {} }
eg5MyNewArray.push(10);//{ '0': 10 }
eg5MyNewArray.push(200);//{ '0': 10, '1': 200 }
console.log(eg5MyNewArray.length);//2
console.log(eg5MyNewArray.get(1));//200
console.log(eg5MyNewArray.pop());//200
console.log(eg5MyNewArray); //eg5CustomArray { length: 1, data: { '0': 10 } }
eg5MyNewArray.push(20);//{ '0': 10, '1': 20 }
eg5MyNewArray.push(30);//{ '0': 10, '1': 20, '2': 30 }
eg5MyNewArray.push(40);//{ '0': 10, '1': 20, '2': 30, '3': 40 }
console.log(eg5MyNewArray); 
// eg5CustomArray {
//   length: 4,
//   data: { '0': 10, '1': 20, '2': 30, '3': 40 }
// }
console.log(eg5MyNewArray.shift());//10
console.log(eg5MyNewArray); 
// eg5CustomArray { length: 3, data: { '0': 20, '1': 30, '2': 40 } }
console.log(eg5MyNewArray.delete(1)      );//30
console.log(eg5MyNewArray); 
// eg5CustomArray { length: 2, data: { '0': 20, '1': 40 } }

// eg5
// eg5CustomArray { length: 0, data: {} }
// { '0': 10 }
// { '0': 10, '1': 200 }
// 2
// 200
// 200
// eg5CustomArray { length: 1, data: { '0': 10 } }
// { '0': 10, '1': 20 }
// { '0': 10, '1': 20, '2': 30 }
// { '0': 10, '1': 20, '2': 30, '3': 40 }
// eg5CustomArray {
//   length: 4,
//   data: { '0': 10, '1': 20, '2': 30, '3': 40 }
// }
// 10
// eg5CustomArray { length: 3, data: { '0': 20, '1': 30, '2': 40 } }
// 30
// eg5CustomArray { length: 2, data: { '0': 20, '1': 40 } }

//eg6 : Reverse String 
console.log('eg6');
//- Hello => olleH
//- convert string => array, reverse the array, convert array => string

const eg6ReverseString = (eg6String) => {
    let eg6Array = eg6String.split(''); // typecast str => `arr`
    eg6Array.reverse();
    return eg6Array.join(''); // typecast `str`<= arr
};

let eg6String = "Hello";//Hello
console.log(eg6String);
eg6String= eg6ReverseString(eg6String); 
console.log(eg6String);//olleH

const eg6ReverseStringSmall = (eg6String) => eg6String.split("").reverse().join("");
eg6String= eg6ReverseStringSmall(eg6String); 
console.log(eg6String);//Hello

eg6String= eg6String.split("").reverse().join("");
console.log(eg6String);//olleH

// eg6
// Hello
// olleH
// Hello
// olleH

//eg7 : Palindrome Checker
console.log("eg7")

const eg7PalindromeChecker = (str) => { return str===str.split("").reverse().join("") };

// more short
const eg7PalindromeCheckerShort = str => str.split("").reverse().join("") === str;

console.log(eg7PalindromeChecker("Hello"));//false
console.log(eg7PalindromeChecker("h"));//true
console.log(eg7PalindromeCheckerShort("cddc"));//true

// eg7
// false
// true
// true

//eg8 : Integer Reversal
console.log("eg8");
const eg8IntegerReverser = (Integer) => parseInt(Integer.toString().split("").reverse().join(""))*Math.sign(Integer);
console.log(eg8IntegerReverser(-1234));// -4321

// eg8
// -4321

// eg9:Sentence Capitalization
console.log("eg9");

//ASCII Complex way
const eg9SentenceCapitalizerASCII = (Sentence) =>{
    let eg9Array = Sentence.split(" ");
    for (let i =0; i<eg9Array.length;i++){ // never put any extraCondition at bw because it will stop,not skip where extraCondition fails

        if (eg9Array[i][0].charCodeAt(0)>=97 && eg9Array[i][0].charCodeAt(0)<=122){
        
         eg9Array[i] = String.fromCharCode(eg9Array[i][0].charCodeAt(0) - 32) // convert 1st letter
        +
        eg9Array[i].slice(1);// rest of stuff
        }

    }
    return eg9Array.join(" ");
}
console.log(eg9SentenceCapitalizerASCII("hello World i Am bALI"));// Hello World I Am BALI

//typical approach
const eg9SentenceCapitalizer = (str) => str.toLowerCase().split(" ").map((word)=>word[0].toUpperCase()+word.slice(1)).join(" "); 
console.log(eg9SentenceCapitalizer("hello World i Am bALI"));//Hello World I Am Bali

// eg9
// Hello World I Am BALI
// Hello World I Am Bali