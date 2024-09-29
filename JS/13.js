let arr = [1, 2, 3, 4, 5];
let ans=0;
for(i=0;i<arr.length;i++){
    if(arr[i]==3){
        ans +=1    
    }
}
if(ans>0){
    console.log("true")
}else{
    console.log("false")
}