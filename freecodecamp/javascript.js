console.log("Hello")
var number = 5;// in line comment
/* A multiline
comment */
// variables
var myname= "AK"

let ourname= "freecodecamp" //Has its scope limited unlike var which is global          ******

const pi = 3.14; // Value doesn't change

//; should be applied but not mandatory

var a = 7;
console.log(a);

var b;
console.log(b);

var c = "i am";
c = c + " Anurag";

console.log(c);

//Camel case

var helloMyNameIsAnurag = 5;

a++; // is valid here
a--;

a += 12; // is valid

// also

a *= 5;

// escape character
var mystr = "I am a \"double quoted\" string in \"double quotes\"";
console.log(mystr);

// or start with single quotes outside representing string and we van use freely double quotes inside
var mystr = 'I am a "double quoted" string in "double quotes\"';
console.log(mystr);   // 26 mins

// concatnate string  using + and +=

var fname = "free";
var fullname = fname + "codecamp";
console.log(fullname);

fullname += fname;//totally valid                                                      *****

//string as array

var myStr = "Jello World";

mystr[0]="H"; //This is wrong for string but can be used in array****
myStr = "Hello World"; //RIght

console.log(myStr);

//.length for length,

// try fuction and full usage of strings
function str (noun, verb, adjective, adverb){
    var str2 = "The " + adjective +" "+ noun + " " + verb +" " + adverb;
    console.log(str2);
}
str("car","flew","big","slowly")

// array and nestd array
var arr = [["Anurag", 5],["Sagar",7],["Hunny",19],54,34,32];

// selecting array in nested arrays
var ans = arr[2][1];
var ans2 = arr[1][0];

console.log("Hunny age is " + ans +" "+ "and name in second element of main array is " + ans2);

// push and unshift element
// arr.push(12,21,23);
// console.log(arr);
// arr.unshift(12,21,23);
// console.log(arr);

// pop and shift element
// arr.pop();               //remove only last element
// console.log(arr);
// arr.shift();
// console.log(arr);


function hello(){
    console.log("Hey bro")
}
hello()


function helloo(a,b){
    console.log(a-b)
}
helloo(100, 2.5)

// var usage, local and global scope
// var has scope global if defined globally and in that funtion if defined there
// but if it is defined anywhere it will be counted initialised as javascripting has hoisting process but remember their value will be undefined

//presidence of local and global variable

function add5(){
    sum += 5;
}

//stand line                             ******************

// boolean

function bool(){
    return true;
}

//if else

function trorfa(wasThatTrue){
    if(wasThatTrue){
        return "Haan vo true hai";
    }
    return "No, that was false";  //this is else statement
}
console.log(trorfa(0)) //so here we can either give true or false or any number also where 0 

//strict equality operator
// 3===3
// 3==="3"

// equality and inequality both operator does type conversion for that we use strict ones !== strict unequality

// nested if
// else if and their order *for else if use example                  **** is there something like if else and else if

var names = ["Hole in one go", "Eagle","Birdie","Par","Bogey","Double Bogey"]
function golfScore(par, strokes){
    if (strokes==1){
        return names[0];
    }else if(strokes <= par-2){
        return names[1];              // go on
    }else if(strokes <= par-1){
        return names[2];
    }else if (strokes <= par){
        return names[3];
    }
}

//switch syntax
function swt(val){
    switch(val){
        case 1:
            return "one";
            break;
        case 2:
            return "two";
            break;
        case "A":
            return "capital a";
            break;
        default:
            return "stuff";
            break;
    }
}
// multiple input and same output in switch
function swt(val){
    switch(val){
        case 1:
        case 2:
        case 3:
            return "one";
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            return "two";
            break;
        case "A":
            return "capital a";
            break;
        default:
            return "stuff";
            break;
    }
}
// skip if else for boolean exapmle
function bool(a,b){
    return a>b;
}

function abTest(a,b){
    if(a<0 || b<0){
        return undefined;
    }

    return Math.round(Math.pow(Math.sqrt(a)+Math.sqrt(b), 2));
}
console.log(abTest(4,-4))

//objects

var obj = {
    1 : "Hello" ,
    "A": "HI",
    "B": "Yo",
    "C": "Hey",
    "D": "Great",
    "IT IS": "NICE"
};

console.log(obj.A);
console.log(obj["IT IS"]);
console.log(obj[1]);

//new prop

obj.E = "Bro";
obj["F"] = "Buddy";

//object replacing switch
function objRepSwitch(val){
    var obj = {
        alpha:"adams",
        "bravo":"Boston",
        "charlie": "Chicago",
        "delta": "Denver",
        "echo": "Easy"
    }
    return obj[val];
}

// hasOwnProperty method
function checkProp(inp){
    if(obj.hasOwnProperty(inp)){
        return obj[inp];
    }else {
        return "Not Found";
    }
}
console.log(checkProp("alpha"));
// objects in array
var myArr = [
    {type: "flowers",
    list: [
        "rose",
        "tulip",
        "dandelion"
    ]
    },
    25,
    34,
    {
        flower:"tress",
        list:["fir",
            "pine",
            "birch"
        ]
    }
];
console.log("The value is " + myArr[0].list[1])


// object in objects 


var car = {
    inside:{
        gloveBox:{
            chocolate: "KitKat"
        }
    }
}
console.log(car.inside.gloveBox["chocolate"]);
// accessing objects in array explained up

// ** RECORD COLLLECTION Do
//See in video if want nearly at 2 hours
// [] AND {} IN OBJ AND ARRAY SEE
// remember both array and objects are declared in nearly same way just small change is bracket used for array sq. one and for object flower one
// Multiply all elements of nested array
// do while        very simple do google.


//Makig a function for question at 2:25

function lookUpProfile( name , prop){
    for(var i=0;i<arr.lenth;i++){
        if(arr[i].firstname === name){
            return(arr[i].prop) || "NO such property";
            break;
        }
    }
    return "No Such contact";
}
console.log(lookUpProfile("Hello", "Bye"));

// Random function
// Random between range
// parseInt
// binary to decimal

//Ternary
function tern (a,b){
    return a===b ? console.log("Equal") : console.log("Unequal");
}
tern(9,9);

// var, let strict
// SO var can be initialised again and again in same program unlike let which can be declared
// only once and create error if done again
// Also as told earlier that var has global scope if declared globally and fuction scope if done in function
// unlike let which has block scope in that block where declared

// mutation of const array
