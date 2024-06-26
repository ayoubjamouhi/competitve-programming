function removeDuplicates(nums) {
    var mynums = nums;
    for (var i = 0; i < mynums.length - 2; i++) {
        if (mynums[i] !== mynums[i + 1]) {
            console.log(mynums);
            mynums[i] = mynums[i + 1];
        }
    }
    console.log('here', nums);
    return mynums.length;
}
;
// [1, 1, 2]
// [1, 1, 1]
// [1, 2, _]
var res = removeDuplicates([1, 1, 1]);
console.log(res);
