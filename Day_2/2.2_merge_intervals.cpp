#include <bits/stdc++.h> 

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());
    for(vector<int> interval:intervals) {
        if(res.empty() || interval[0] > res.back()[1])
            res.push_back(interval);
        else
            res.back()[1] = max(res.back()[1], interval[1]);
    }

    return res;
}
