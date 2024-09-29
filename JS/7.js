let c = prompt("enter a signal color : ")
let r = "red";
let y = "yellow"
let g ="green"
if(c == r || c == y|| c == g ){
    if(c==r){
        console.log("Stop")
    }else if(c==y){
        console.log("slow down")
    }else{
        console.log("Go")
    }
}else{
    console.log("your signal color is not valid.")
}