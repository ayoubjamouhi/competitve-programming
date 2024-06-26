/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.next = (next === undefined ? null : next)
    }
    beNextOf(left: ListNode) {
        left.next = this;
        return left;
    }

}
function mergeTwoLists(list1: ListNode | null, list2: ListNode | null): ListNode | null {

    const out: number[] = [];
    while (list1?.next !== null) {
        list1?.val && out.push(list1?.val);
    }
    while (list2?.next !== null) {
        list2?.val && out.push(list2?.val);
    }
    out.sort((a, b) => a - b)
    const nodes = out.map(item => new ListNode(item));

    return nodes.reduceRight((acc, cur) => {
        return acc.beNextOf(cur);
    });

};
