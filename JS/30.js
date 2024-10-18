// 30. Write a program to input an integer 'n' and print the
// sum of all its even digits and the sum of all its odd digits
// separately. Example : Input: 'n' = 132456, Output: 12, 9



function eo(n){
    if(typeof n !== 'number' ){
        console.log("this is not number")
        return;
    }

let ns = n.toString()
let evens = 0;
let odds = 0 ;
for(let i=0;i<ns.length;i++){
    let digit = parseInt(ns[i]);
    if(digit%2 == 0){
        evens += digit
    }else{
        odds += digit
    }
}
console.log("their even number sum : ",evens)
console.log("their odd number sum : ",odds)
}