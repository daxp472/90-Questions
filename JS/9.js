let arr = [4,2,8,5,1]
for(i=0;i<arr.length;i++){
    for(j=i+1;j<arr.length;j++){
        if(arr[i]>arr[j]){
            [arr[i],arr[j]]=[arr[j],arr[i]]
        }
    }
}
console.log(arr)