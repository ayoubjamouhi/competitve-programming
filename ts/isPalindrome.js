function isPalindrome(x) {
    var y = x.toString();
    console.log(y);
    var my = '';
    for (var i = y.length - 1; i >= 0; i--) {
        my += y[i];
    }
    return Number(my) === x;
}
;
isPalindrome(121);
