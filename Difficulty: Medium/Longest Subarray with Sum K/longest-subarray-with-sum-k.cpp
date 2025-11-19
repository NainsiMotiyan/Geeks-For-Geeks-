class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int ,int > prefixsum;
        int n=arr.size();
        int sum=0,ans=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k){
                ans=max(ans,i+1);
            }
           if(prefixsum.find(sum-k)!=prefixsum.end()){
               ans=max(ans,i-prefixsum[sum-k]);
           }
           if(prefixsum.find(sum)==prefixsum.end()){
               prefixsum[sum]=i;
           }
        }
        return ans;
    }
};