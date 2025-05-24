/* Given an unsorted array of integers nums and an integer k, return the kth largest element in the array.

By kth largest element, we mean the kth largest element in the sorted order, not the kth distinct element. */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int num : nums){
            minHeap.push(num);
            if (minHeap.size() > k){
            minHeap.pop();
            }
        }
        return minHeap.top();
    }
};
