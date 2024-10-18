// 42. Given two lists of events. Each event is represented by
// a start time and an end time. You need to determine if the
// two events conflict, which means if the events overlap in
// time.
// Input Format:
// ● Each event is represented by a list [start, end],
// where start is the start time (inclusive) and end is
// the end time (exclusive).
// ● The events are represented as two arrays: event1
// and event2.
// Output:
// ● Return true if there is a conflict between the two
// events; otherwise, return false.
// Example 1: Input: event1 = [1, 5], event2 = [5, 10]
// Output: false, Exampe 2: Input: event1 = [1, 5], event2 =
// [2, 3] Output: true.

let a = prompt("enter a first event starting time : ")
let b = prompt("enter a first event ending time : ")
let c = prompt("enter a second event starting time : ")
let d = prompt("enter a second event ending  time : ")
let x = 0;
for(let i=a;i<b;i++){
    for(let j=c;j<d;j++){
        if(i==j){
            x++;
        }
    }
}
if(x>0){
    console.log("true")
}else{
    console.log("false")
}