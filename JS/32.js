// 32.Write a program that categorizes a
// person’s age group based on the given age:
// ● Less than 13: "Child"
// ● Between 13 and 19: "Teenager"
// ● Between 20 and 59: "Adult"
// ● 60 and above: "Senior"

let a = prompt("enter youe age : ")
if(a>0 && a<13){
    console.log("child")
}else if(a>=13 && a<=19){
    console.log("Teenager")
}else if(a>=20 && a<=59){
    console.log("Adult")
}else if (a>59){
    console.log("Senior")
}else{
    console.log("this age is not valid")
}