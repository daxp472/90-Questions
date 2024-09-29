let arr = [3, 5, 9, 1,7]
let n =0
for(i=0;i>arr.length;i++){
    if(arr[i]<0){
        n += 1;
    }
}
if(n == 0){
    console.log("true")
}else{
    console.log("false")
}