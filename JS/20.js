let arr = [80, 30, 70, 50, 20]
let max = arr[0]
let min = arr[0]
for (i = 0; i < arr.length; i++) {
    if (max < arr[i]) {
        max = arr[i];
    }
    if (min > arr[i]) {
        min = arr[i];
    }
}
console.log(max-min)