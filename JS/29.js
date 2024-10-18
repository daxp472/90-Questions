function target(num){
    if(typeof num !== 'number' ){
        console.log("this is not number")
        return;
    }
    let ans =[];
    let arr =  [2,7,11,15]
    for(i=0;i<arr.length;i++){
        for(j=i+1;j<arr.length;j++){
            if(arr[i]+arr[j]==num){
                ans.push([arr[i],arr[j]])
            }
        }
    }
    if(ans.length>0){
        console.log(ans)
    }else{
        console.log("your num pairs are not in array.")
    }
}
target(9)