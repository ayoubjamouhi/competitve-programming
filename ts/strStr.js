function strStr(haystack, needle) {
    var result = -1;
    var matchLoc = 0;
    for (var i = 0; i < haystack.length; i++) {
        console.log('i', i, matchLoc, haystack[i]);
        if (haystack[i] == needle[matchLoc]) {
            matchLoc++;
            if (needle.length == matchLoc) {
                result = i - matchLoc + 1;
                break;
            }
        }
        else {
            console.log(' mc', i, matchLoc);
            // i -= matchLoc;
            i = i - matchLoc;
            console.log(' else i', i);
            matchLoc = 0;
        }
    }
    return result;
}
;
var t = strStr('mississippi', 'issip');
console.log(t);
