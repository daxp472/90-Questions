let arr = [1,-2, 3,-4, 5,-6]
let p=0
let n=0
for(i=0;i<arr.length;i++){
    if(arr[i]>0){
        p +=1
    }
    if(arr[i]<0){
        n +=1
    }
}

console.log(p)
console.log(n)