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

// eg10: FizzBuzz
// new way of console log
console.log('eg10');
const eg10FizzBuzzNew = (n) => {for (let i =1; i<=n; i++) {
    console.log(
        i%3==0 ? 
        (
            (i%5==0 ?
            ("FizzBuzz"):("Fizz")
        )
        )
        :
        (i%5==0 ?
            ("Buzz"):(i)
        )
    );
}};

eg10FizzBuzzNew(10);
// 1
// 2
// Fizz
// 4
// Buzz
// Fizz
// 7
// 8
// Fizz
// Buzz

//old normal way
const eg10FizzBuzzNormal = (n) => {
    for (let i =1; i<=n; i++) 
    {
        if ( i%3==0 && i%5==0) console.log("FizzBuzz");
        else if ( i%3==0 ) console.log("Fizz");
        else if ( i%5==0 ) console.log("Buzz");
        else console.log(i);
    }
};

eg10FizzBuzzNormal(10);
// 1
// 2
// Fizz
// 4
// Buzz
// Fizz
// 7
// 8
// Fizz
// Buzz


// eg10
// 1
// 2
// Fizz
// 4
// Buzz
// Fizz
// 7
// 8
// Fizz
// Buzz
// 1
// 2
// Fizz
// 4
// Buzz
// Fizz
// 7
// 8
// Fizz
// Buzz



// eg11: Max Profit
console.log("eg11");
// [7, 1, 5, 3, 6, 4]

const eg11MaxProfitCalOpt = (prices) => {
    let minPrice = prices[0]; // first day is cheapest day to buy for now assumption at first place
    let maxProfit = 0;
    for (let i=1; i<prices.length; i++){
        const currentPrice = prices[i];
        minPrice = Math.min(minPrice,currentPrice); //update min price if the lower price is found
        const potentialProfit = currentPrice - minPrice;
        maxProfit = Math.max(maxProfit, potentialProfit);
        console.log(maxProfit);
    }



};

const eg11MaxProfitCal = (array) => {
    let Min=Infinity, MaxProfit=0; //min_so_far = +∞ (or first element), max_profit = 0
    for (let i =0; i<array.length; i++){
        let TodayPrice = array[i];

        if (TodayPrice-Min > MaxProfit){MaxProfit=TodayPrice-Min};// or MaxProfit = Math.max(MaxProfit, TodayPrice-Min);
        if (TodayPrice<Min) {Min=TodayPrice;}// or Min = Math.min(Min,TodayPrice);


    }
    return MaxProfit;
};
// [7, 1, 5, 3, 6, 4]
console.log(eg11MaxProfitCal([3, 2, 6, 5, 0, 3])); //4
console.log(eg11MaxProfitCal([7, 1, 5, 3, 6, 4])); //5
console.log(eg11MaxProfitCalOpt([3, 2, 6, 5, 0, 3])); //4
console.log(eg11MaxProfitCalOpt([7, 1, 5, 3, 6, 4])); //5

// // Wrong Approach, Calculating just differences won't solve the problem, it doesn't compare previous profit
// const eg11MaxProfitCal = (array) => {
//     let Min=Infinity, Max=0; //min_so_far = +∞ (or first element), max_profit = 0
//     for (let i =0; i<array.length; i++){
//         let TodayPrice = array[i];
//         if (TodayPrice<Min) {Min=TodayPrice;} //3 2 2 2 0 3
//         if (TodayPrice>Max) {Max=TodayPrice;} //3 0 6 6 0 3
//         if (Min===TodayPrice) {Max=0;}
//     }
//     return Max-Min;
// };
// console.log(eg11MaxProfitCal([3, 2, 6, 5, 0, 3])); //3

// eg11
// 4
// 5
// 4
// 5

// eg12: Array Chunk
console.log("eg12");

const eg12ArrayChunker1 = (array,chunkSize) => {
    let index=0;
    let chunkArray=[];
    while (index<array.length){
        const chunk = array.slice(index,index+chunkSize);
        chunkArray.push(chunk);
        index+=chunkSize;
    }
    return chunkArray;
};

const eg12ArrayChunker2 = (array,chunk) => {
    
    let chunkArray = [];
    let subChunk = [];
    let chunkCount = 0;

    const allotChunk= (chunkArray,subChunk) => {chunkArray.push(subChunk);}

    const reset = () => {subChunk=[]; chunkCount=0}; 

    let lastElement = array[array.length-1];

    for(let i=0; i<array.length; i++){
        chunkCount++;

        let element = array[i];
        
        subChunk.push(element);
        if (chunkCount===chunk || element===lastElement){
            allotChunk(chunkArray,subChunk);
            reset();

        }
        
        
    }
    return chunkArray;
};

console.log(eg12ArrayChunker1([1, 2, 3, 4, 5, 6, 7, 8], 3)); //[ [ 1, 2, 3 ], [ 4, 5, 6 ], [ 7, 8 ] ]
console.log(eg12ArrayChunker1([1, 2, 3, 4, 5], 2));//[ [ 1, 2 ], [ 3, 4 ], [ 5 ] ]
console.log(eg12ArrayChunker2([1, 2, 3, 4, 5, 6, 7, 8], 3)); //[ [ 1, 2, 3 ], [ 4, 5, 6 ], [ 7, 8 ] ]
console.log(eg12ArrayChunker2([1, 2, 3, 4, 5], 2));//[ [ 1, 2 ], [ 3, 4 ], [ 5 ] ]

// eg12
// [ [ 1, 2, 3 ], [ 4, 5, 6 ], [ 7, 8 ] ]
// [ [ 1, 2 ], [ 3, 4 ], [ 5 ] ]
// [ [ 1, 2, 3 ], [ 4, 5, 6 ], [ 7, 8 ] ]
// [ [ 1, 2 ], [ 3, 4 ], [ 5 ] ]

// eg13: Two Sum ( Ugly Code )
// this is not better solution, there exists a better approach
console.log("eg13");

const eg13TwoSumUgly = (array, target) => {
    for( let i=0; i<array.length; i++){
        for( let j=0; j<array.length; j++){
            if (i!==j && (array[i]+array[j]===target)){
                return [i,j];
            }
        }
    }
};
const eg13TwoSumUgly2 = (array, target) => {
    for( let i=0; i<array.length; i++){
        for( let j=i+1; j<array.length; j++){
            if (array[i]+array[j]===target){
                return [i,j];
            }
        }
    }
    return []; //return empty if not exists 
};
const eg13TwoSumLessUgly= (array, target) => {
    for( let i=0; i<array.length; i++){
        if ( array.includes(target-array[i]) ) { // array.includes()
            return [i,array.indexOf(target-array[i])];// array.indexOf()
        }
    }
};

console.log(eg13TwoSumUgly([2, 7, 11, 15],9));//[ 0, 1 ]
console.log(eg13TwoSumUgly2([2, 7, 11, 15],9));//[ 0, 1 ]
console.log(eg13TwoSumLessUgly([2, 7, 11, 15],9));//[ 0, 1 ]

// eg13
// [ 0, 1 ]
// [ 0, 1 ]
// [ 0, 1 ]

// eg14 : Linked List 
console.log("eg14");
// 1. Setup Linked List

// First Node
class eg14Node{
    constructor(value){
        this.head=value;
        this.next=null;
    }
}

// First LL
//       Head
//        |
//        V
// +-------------------+
// |   Value:    1     |
// |   Next:   NULL    |
// +-------------------+
//        ^
//        |
//       Tail

class eg14LinkedList{
    constructor(value){
        this.head=new eg14Node(value);
        this.tail=this.head;
        this.length=1;
    }

    // 2. Push Method
    push(value){
        let newNode = new eg14Node(value);
        if(!this.head){
            this.head= newNode;
            this.tail= newNode;
            this.length++;

        }
        else{
            this.tail.next = newNode;
            this.tail = newNode;
            this.length++;
        }

        // In the empty list case, tail and newNode are the same. Setting tail.next = newNode creates a loop.
        // By adding the else, we only set tail.next when there’s already a node, preventing the [Circular *1] issue.


}

    // 3. Pop Method
    pop(){
        if(!this.head){
            return undefined;
        }

        let temp = this.head;
        let prev=this.head;
        while(temp.next){ //not equals to null, it exists
            prev=temp;
            temp=prev.next;
        }

        this.tail = prev;
        this.tail.next=null;
        this.length--;

        if(this.length===0){
            this.head=null;
            this.tail=null;
        }
        return temp;
    }
    
    // 4. Unshift Method, Best Way
    unshift(value){
        let newNode = new eg14Node(value);
        if (this.length===0){ // or if(!this.head)
            this.head=newNode;
            this.tail=newNode;
            // this.length++;  
        }
        else{             
            newNode.next=this.head;
            this.head=newNode;
            // this.length++;
        }

        // i wrote 2 lines below as they both are same in both the if and else block, so why not reduce the code :)
        this.length++; 
        // this.head=newNode; // NO, Moving this.head = newNode and this.length++ outside the if/else seems DRY(Don’t Repeat Yourself), but in the empty-list case it can leave .next uninitialized or mislinked, risking a self-referencing node; keeping assignments inside the blocks ensures head and tail are set safely.
    }

    // 5. Shift Method
    shift(){
        if (!this.head){return undefined;}
        let temp = this.head;
        this.head = temp.next; // or this.head.next
        temp.next = null;
        this.length--;
        if(this.length===0){this.tail=null;
            // this.head=null; // this would be done automatic , as at attaching temp.next ;head is actually attaching to null
        }
        return temp;
    }

    // 6. Get First Method
    getFirst(){return this.head;}

    // 7. Get Last Method
    getLast(){return this.tail;}
    getLast2(){
        if(!this.head) return null;
        let temp = this.head;
        while(temp){
            if(!temp.next){
                return temp
            }
            temp=temp.next;
        }
    }

    // 8. Get Method. Get Element By Index
    get(index){
        if (index >= this.length) return undefined;
        else {
            let temp = this.head;
            for(let i=0; i<index; i++){
                temp=temp.next;
            }
            return temp;
        }

    }

    // 9. Set Method
    set(index,value){
        if (index >= this.length) return undefined;
        if (index===0){
            let temp=this.head;
            if(value){
                let newNode = new eg14Node(value);
                this.head=newNode;
                newNode.next = temp.next;
                temp.next=null
                return newNode;
            }
            else{
                return temp;
            }


        }
        else {
            let temp = this.head;
            let prev = this.head; 
            for(let i=0; i<index-1; i++){// we did to make prev lagging behind temp by 1 time
                temp=temp.next;
                prev=prev.next;
            }
            temp=temp.next;// now temp is just after prev
            if(value){
                let newNode = new eg14Node(value);
                prev.next=newNode;
                newNode.next=temp.next;
                temp.next=null;
                if(newNode.next===null){// if element is last element
                    this.tail= newNode
                }
                return newNode;
            }else{
                return temp;
            }
            
        }

    }
        // Wrong approach
        // set1(index,value){
        //     let temp = this.get(index);
        //     if (temp){temp.value=value;return true;}
        //     else {return false;}
        // }

    // 10. Insert Method
    insert(index,value){
        if (index+1>this.length) {return undefined;}

        else {
            let newNode = new eg14Node(value);
            let temp = this.head;
            let counter =1;
            while(counter<index){
                temp=temp.next;
                counter++;
            }
            newNode.next=temp;
            this.length++;

            return newNode;

        }
    }
}

// useage
const eg14MyNewLinkedList = new eg14LinkedList(1);
console.log(eg14MyNewLinkedList);
// eg14LinkedList {
//   head: eg14Node { head: 1, next: null },
//   tail: eg14Node { head: 1, next: null },
//   length: 1
// }
eg14MyNewLinkedList.push(2);
console.log(eg14MyNewLinkedList);
// eg14LinkedList {
//   head: eg14Node { head: 1, next: eg14Node { head: 2, next: null } },
//   tail: eg14Node { head: 2, next: null },
//   length: 2
// }
eg14MyNewLinkedList.pop();
console.log(eg14MyNewLinkedList);
// eg14LinkedList {
//   head: eg14Node { head: 1, next: null },
//   tail: eg14Node { head: 1, next: null },
//   length: 1
// }
eg14MyNewLinkedList.pop();
console.log(eg14MyNewLinkedList);
// eg14LinkedList { head: null, tail: null, length: 0 }
console.log(eg14MyNewLinkedList.pop());
// undefined
console.log(eg14MyNewLinkedList);
// eg14LinkedList { head: null, tail: null, length: 0 }

// just filling LL
eg14MyNewLinkedList.push(10);
eg14MyNewLinkedList.push(20);
eg14MyNewLinkedList.push(110);


console.log(eg14MyNewLinkedList);
// eg14LinkedList {
//   head: eg14Node { head: 10, next: eg14Node { head: 20, next: [eg14Node] } },
//   tail: eg14Node { head: 110, next: null },
//   length: 3
// }

// What the heck it this: next: [eg14Node]
// That next: [eg14Node] you’re seeing is not an error
// by using console.log(VAR_NAME)
// it’s just how Node.js (or Chrome DevTools) abbreviates deeply nested objects when printing them with console.log
// [eg14Node] means : "There’s another eg14Node object here, but I’m not expanding it."
// Node.js tries to keep console output short.
// console.dir(VAR_NAME, { depth: null }); forces Node.js to expand all nested objects
console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node {
//     head: 10,
//     next: eg14Node { head: 20, next: eg14Node { head: 110, next: null } }
//   },
//   tail: eg14Node { head: 110, next: null },
//   length: 3
// }

eg14MyNewLinkedList.unshift(10000);
console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node {
//     head: 10000,
//     next: eg14Node {
//       head: 10,
//       next: eg14Node { head: 20, next: eg14Node { head: 110, next: null } }
//     }
//   },
//   tail: eg14Node { head: 110, next: null },
//   length: 4
// }
console.log(eg14MyNewLinkedList);
// eg14LinkedList {
//   head: eg14Node {
//     head: 10000,
//     next: eg14Node { head: 10, next: [eg14Node] }
//   },
//   tail: eg14Node { head: 110, next: null },
//   length: 4
// }
eg14MyNewLinkedList.unshift(50000);
console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node {
//     head: 50000,
//     next: eg14Node {
//       head: 10000,
//       next: eg14Node {
//         head: 10,
//         next: eg14Node { head: 20, next: eg14Node { head: 110, next: null } }
//       }
//     }
//   },
//   tail: eg14Node { head: 110, next: null },
//   length: 5
// }
console.log(eg14MyNewLinkedList);
// eg14LinkedList {
//   head: eg14Node {
//     head: 50000,
//     next: eg14Node { head: 10000, next: [eg14Node] }
//   },
//   tail: eg14Node { head: 110, next: null },
//   length: 5
// }
eg14MyNewLinkedList.pop();
eg14MyNewLinkedList.pop();
eg14MyNewLinkedList.pop();
eg14MyNewLinkedList.pop();
eg14MyNewLinkedList.pop();
console.log(eg14MyNewLinkedList);
// eg14LinkedList { head: null, tail: null, length: 0 }
eg14MyNewLinkedList.unshift(200000);
console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node { head: 200000, next: null },
//   tail: eg14Node { head: 200000, next: null },
//   length: 1
// }

// just filling LL
eg14MyNewLinkedList.push(10);

console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node { head: 200000, next: eg14Node { head: 10, next: null } },
//   tail: eg14Node { head: 10, next: null },
//   length: 2
// }
eg14MyNewLinkedList.shift();
console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node { head: 10, next: null },
//   tail: eg14Node { head: 10, next: null },
//   length: 1
// }
eg14MyNewLinkedList.shift();
console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList { head: null, tail: null, length: 0 }
console.log(eg14MyNewLinkedList.getFirst());
// null

// just filling LL
eg14MyNewLinkedList.push(10);
console.log(eg14MyNewLinkedList.getFirst());
// eg14Node { head: 10, next: null }

eg14MyNewLinkedList.push(20);
console.log(eg14MyNewLinkedList.getFirst());
// eg14Node { head: 10, next: eg14Node { head: 20, next: null } }

eg14MyNewLinkedList.push(110);
console.log(eg14MyNewLinkedList.getFirst());
// eg14Node {
//   head: 10,
//   next: eg14Node { head: 20, next: eg14Node { head: 110, next: null } }
// }
console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node {
//     head: 10,
//     next: eg14Node { head: 20, next: eg14Node { head: 110, next: null } }
//   },
//   tail: eg14Node { head: 110, next: null },
//   length: 3
// }
console.log(eg14MyNewLinkedList.getLast());
// eg14Node { head: 110, next: null }
console.log(eg14MyNewLinkedList.getLast2());
// eg14Node { head: 110, next: null }

console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node {
//     head: 10,
//     next: eg14Node { head: 20, next: eg14Node { head: 110, next: null } }
//   },
//   tail: eg14Node { head: 110, next: null },
//   length: 3
// }
console.log(eg14MyNewLinkedList.get(0));
// eg14Node {
//   head: 10,
//   next: eg14Node { head: 20, next: eg14Node { head: 110, next: null } }
// }
console.log(eg14MyNewLinkedList.get(1));
// eg14Node { head: 110, next: null }

console.log(eg14MyNewLinkedList.get(2));
// eg14Node { head: 110, next: null }

console.log(eg14MyNewLinkedList.get(3));
// undefined

console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node {
//     head: 10,
//     next: eg14Node { head: 20, next: eg14Node { head: 110, next: null } }
//   },
//   tail: eg14Node { head: 110, next: null },
//   length: 3
// }

console.log(eg14MyNewLinkedList.set(1));
// eg14Node { head: 20, next: eg14Node { head: 110, next: null } }

console.log(eg14MyNewLinkedList.set(1,100));
// eg14Node { head: 100, next: eg14Node { head: 110, next: null } }

console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node {
//     head: 10,
//     next: eg14Node { head: 100, next: eg14Node { head: 110, next: null } }
//   },
//   tail: eg14Node { head: 110, next: null },
//   length: 3
// }

console.log(eg14MyNewLinkedList.set(2,10000));
// eg14Node { head: 10000, next: null }

console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node {
//     head: 10,
//     next: eg14Node { head: 100, next: eg14Node { head: 10000, next: null } }
//   },
//   tail: eg14Node { head: 10000, next: null },
//   length: 3
// }


console.log(eg14MyNewLinkedList.set(0,1));
// eg14Node {
//   head: 1,
//   next: eg14Node { head: 100, next: eg14Node { head: 10000, next: null } }
// }
console.dir(eg14MyNewLinkedList, { depth: null });
// eg14LinkedList {
//   head: eg14Node {
//     head: 1,
//     next: eg14Node { head: 100, next: eg14Node { head: 10000, next: null } }
//   },
//   tail: eg14Node { head: 10000, next: null },
//   length: 3
// }
