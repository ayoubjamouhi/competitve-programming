function isPalindrome(x: number): boolean {
    const y: string = x.toString();
    console.log(y)
    var my = '';
    for (let i=y.length-1;i>=0;i--) {
        my+=y[i]
    }
    return Number(my) === x
};

isPalindrome(121)