// 39. Given a string, check if all brackets
// are closed properly. Example:Input: "{[()]}"
// Output: true

let str = "{[()]}"
let count=0;
let one = "{"
let two = "}"
let three = "["
let four = "]"
let five = "("
let six = ")"
let len = str.length
for(let i=0;i<len;i++){
    if(str[i]==one){
        if(str[len-1-i]==two){
            count++;
        }
    }
    if(str[i]==three){
        if(str[len-1-i]==four){
            count++;
        }
    }
    if(str[i]==five){
        if(str[len-1-i]==six){
            count++;
        }
    }
}
if(count==str.length/2){
    console.log("true")
}else{
    console.log("false")
}