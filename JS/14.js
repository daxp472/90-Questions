let nums = [1, 2, 3, 4]
for(i=nums.length;i>0;i--){
    nums[i]=nums[i-1]
}
nums[0]=0
console.log(nums)