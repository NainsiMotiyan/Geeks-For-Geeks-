class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int candidate = 0, count = 0;

        for (int x : arr) {
            if (count == 0)
                candidate = x;

            count += (x == candidate) ? 1 : -1;
        }

        int freq = 0;
        for (int x : arr) {
            if (x == candidate) freq++;
        }

        if (freq > arr.size() / 2)
            return candidate;

        return -1;
    }
};
