let marks = prompt("enter your marks between 1 to 100 :")
if(marks<=100 && marks>=0){
    if(marks>=90){
        console.log("your grade is A")
    }else if(marks>=80 && marks<90){
        console.log("your grade is B")
    }else if(marks>=70 && marks<80){
        console.log("your grade is C")
    }else if(marks>=60 && marks<70){
        console.log("your grade is D")
    }else{
        console.log("your grade is F")
    }
}else{
    console.log("your marks is not valid.")
}