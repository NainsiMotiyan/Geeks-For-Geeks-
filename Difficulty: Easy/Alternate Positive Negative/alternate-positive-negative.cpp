class Solution {
  public:
    void rearrange(vector<int> &arr) {
        vector<int> pos, neg;

        // Separate positives and negatives
        for (int x : arr) {
            if (x >= 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }

        vector<int> ans;
        int i = 0, j = 0;
        bool turnPos = true; // start with positive

        // Alternate positive and negative
        while (i < pos.size() && j < neg.size()) {
            if (turnPos)
                ans.push_back(pos[i++]);
            else
                ans.push_back(neg[j++]);

            turnPos = !turnPos;
        }

        // Add remaining positives
        while (i < pos.size())
            ans.push_back(pos[i++]);

        // Add remaining negatives
        while (j < neg.size())
            ans.push_back(neg[j++]);

        // Copy ans back into original array
        for (int k = 0; k < arr.size(); k++) {
            arr[k] = ans[k];
        }
    }
};
