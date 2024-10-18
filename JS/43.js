let arr = [1,1,0,1,1,1]
let max=0
let current=0
for(let i=0;i<arr.length;i++){
    if(arr[i]==1){
        current++
        if(current>max){
            max = current
        }
    }else{
        current =0;
    }
}
if(current>max){
    max = current
}
console.log(max)