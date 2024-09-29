let  arr = [1, 2, 3, 4, 5] 
let arr2 = []
let ans =0;
for(i=0;i<arr.length;i++){
    for(j=i+1;j<arr.length;j++){
        if(arr[i]>arr[j]){
            ans +=1;
            break;
        }
    }
}
if(ans>0){
    console.log("false")
}else{
    console.log("true")
}