function longestCommonPrefix(strs: string[]): string {
    strs.forEach((mt_str: string) => {

    });
    var match = true;
    for (let i = 0; i < strs.length-1; i++) {
        for (let j = 0; j < strs[i].length; i++) {
            if(strs[i][j] !== strs[i+1][j]) {
                return ''
            }
        }
    }

    [
        j=0 .   j=1
        ['f', 'a', 'b'], i=0
        ['f', 'a', 'd'], i=1
        ['d', 'a', 'h'], i=2
    ]
};