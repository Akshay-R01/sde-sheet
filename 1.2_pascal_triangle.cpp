class Solution {
private:
    vector<int> getRow(int n) {
        vector<int> row;
        row.push_back(1);
        long long sum = 1;
        for(int i=1; i<n; i++) {
            sum *= n-i;
            sum /= i;
            row.push_back(sum);
        }
        return row;

    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=1; i<=numRows; i++) {
            vector<int> row = getRow(i);
            res.push_back(row);
        }
        return res;
    }
};