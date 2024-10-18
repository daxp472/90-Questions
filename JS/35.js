// 35. Print an inverted right-angled triangle
// pattern with n rows.

n = 5;
for(i=n;i>=1;i--){
    let row = '';
    for(j=1;j<=i;j++){
        row+='* ';
    }console.log(row)
}

