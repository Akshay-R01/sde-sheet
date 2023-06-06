class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int num1, num2, count1, count2;
        num1 = num2 = INT_MIN;
        count1 = count2 = 0;
        for(int &num:nums) {
            if(count1==0 && num!=num2) {
                count1 = 1;
                num1 = num;
            }
            else if(count2==0 && num!=num1) {
                count2 = 1;
                num2 = num;
            }
            else if(num==num1) count1++;
            else if(num==num2) count2++;
            else count1--, count2--;
        }
        count1 = count2 = 0;
        for(int &num:nums) {
            if(num==num1) count1++;
            if(num==num2) count2++;
        }
        vector<int> res;
        if(count1>n/3) res.push_back(num1);
        if(count2>n/3) res.push_back(num2);
        return res;
    }
};