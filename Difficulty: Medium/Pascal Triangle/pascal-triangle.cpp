class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> row;
        long long val = 1;

        row.push_back(1);

        for (int k = 1; k < n; k++) {
            val = val * (n - k) / k;
            row.push_back((int)val);
        }

        return row;
    }
};
