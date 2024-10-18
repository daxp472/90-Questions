// 45. Given a sentence, return the longest word in it.
// Input: "I love programming in JavaScript"
// Output: "programming"

let str ="I love programming in JavaScript"
let str2 = str.split(" ")
let max =0
let position ;
for(let i =0;i<str2.length;i++){
    if(max<str2[i].length){
        max = str2[i].length
        position = i
    }
}
console.log("this is a longest word in this string :",str2[position])