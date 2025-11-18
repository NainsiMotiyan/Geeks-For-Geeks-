class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size()+1;
        int total=0;
        for(int i=1;i<=n;i++){
            total+=i;
        }
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return total-sum;
    }
};