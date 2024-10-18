str = "hello world";
arr = str.split("");
chr = "o";
count_chr = 0;
for(i of arr){
    if(i==chr){
        count_chr+=1;
    }
}console.log(count_chr);