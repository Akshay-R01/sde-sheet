#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
    int i = (m--) + (n--) - 1; // getting the last index and updating m & n for index offset

    while (m >= 0 && n >= 0) // simple merging while loop
    {
        if (nums1[m] > nums2[n])
            nums1[i--] = nums1[m--];
        else
            nums1[i--] = nums2[n--];
    }
    // in case of leftovers in the nums2 array
    while (n >= 0)
        nums1[i--] = nums2[n--];
    return nums1;
}