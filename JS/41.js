// 41. Given a valid IP address, you are asked to return a
// defanged version of that IP address. A defanged IP
// address replaces every period "." with "[.]".
// Example1:Input: address = "1.1.1.1" Output: "1[.]1[.]1[.]1"




let ip = "1.1.1.1";
let nip = ip.replace(/\./g, "[.]");
console.log(nip);