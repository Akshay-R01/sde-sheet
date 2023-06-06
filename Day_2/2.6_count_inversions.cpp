int merge(vector<int> &nums, int low, int mid, int high) {
    int l = low;
    int r = mid+1;
    vector<int> temp;
    int count = 0;
    while(l<= mid && r<= high) {
        if(nums[l] > nums[r]) {
            temp.push_back(nums[r++]);
            count += mid-l+1;
        }
        else
            temp.push_back(nums[l++]);
    }
    while(l<= mid) {
        temp.push_back(nums[l++]);
    }
    while(r<= high) {
        temp.push_back(nums[r++]);
    }
    for(int i=low; i<=high; i++) {
        nums[i] = temp[i-low];
    }
    return count;
}

int mergeSort(vector<int> &nums, int low, int high) {
    if(low >= high) return 0;
    int mid = (low + high)/2;
    int count = 0;
    count += mergeSort(nums, low, mid);
    count += mergeSort(nums, mid+1, high);
    count += merge(nums, low, mid, high);
    return count;
}

int numberOfInversions(vector<int>&a, int n) {
    int res = mergeSort(a, 0,n-1);
    return res;
}