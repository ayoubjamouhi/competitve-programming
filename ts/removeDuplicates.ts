function removeDuplicates(nums: number[]): number {
    const mynums = nums;
    for (let i = 0; i < mynums.length - 2; i++) {
            if (mynums[i] !== mynums[i+1]) {
                console.log(mynums)
                mynums[i] = mynums[i+1]
            }
    }
    console.log('here', nums);

    return mynums.length;
};
// [1, 1, 2]
// [1, 1, 1]
// [1, 2, _]
const res: number = removeDuplicates([1, 1, 1])
console.log(res);
