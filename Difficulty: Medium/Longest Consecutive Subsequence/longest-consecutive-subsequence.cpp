class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> s;
        int longest = 0;

        for (int x : arr)
            s.insert(x);

        for (int x : s) {
            if (s.find(x - 1) == s.end()) {
                int curr = x;
                int count = 1;

                while (s.find(curr + 1) != s.end()) {
                    curr++;
                    count++;
                }

                longest = max(longest, count);
            }
        }
        return longest;
    }
};
