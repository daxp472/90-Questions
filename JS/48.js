let str = "hello";
let str2 = "";
let arr = str.split("");
console.log(arr);

for (let i of arr) {
    if (i != "a" && i != "e" && i != "i" && i != "o" && i != "u") {
        str2 += i; 
    }
}console.log(str2); 