#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    int bp = -1;
    //find the breakpoint
    for(int i=n-2; i>=0; i--) {
        if(nums[i] < nums[i+1]) {
            bp = i;
            break;
        }
    }
    //edge case if whole array is decreasing
    if (bp == -1) {
      reverse(nums.begin(), nums.end());
      return nums;
    }
    //swapping the breakpoint and its next greater element
    for(int i=n-1; i>=0; i--) {
        if(nums[i] > nums[bp]) {
            swap(nums[i], nums[bp]);
            reverse(nums.begin() + bp+1, nums.end());
            break;
        }
    }
    return nums;
}