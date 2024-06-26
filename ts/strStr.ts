function strStr(haystack: string, needle: string): number {
    let result = -1;
    let matchLoc = 0;

    for (let i = 0; i < haystack.length; i++) {
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
            i = i - matchLoc
            console.log(' else i', i);

            matchLoc = 0;
        }
    }

    return result;
};

const t = strStr('mississippi',
                     'issip')
console.log(t);
