// 40. Given two numbers, generate an array
// containing all numbers between them
// (inclusive). Example: Input: 1,5 Output: [1,
// 2, 3, 4, 5]


let a=prompt("type a first number : ")
let b = prompt("type a second number : " )
let ans =[]
for(let i=a;i<=b;i++){
    ans.push(i)
}
console.log(ans)