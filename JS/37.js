// 37. Given a sorted array and a target value,
// return the starting and ending position of
// that target in the array.Example:Input: [5,
// 7, 7, 8, 8, 10], target=8 ,Output: [3, 4]

let arr = [5,7,7,8,8,10]
let target = 8
let first =0;
let last = 0;
let ans =[]
for(let i=0;i<arr.length;i++){
    if(arr[i]==target){
        if(first==0){
            first = i;
        }
        last =i;
    }
}
ans[0]=first
ans[1]=last
console.log(ans)

