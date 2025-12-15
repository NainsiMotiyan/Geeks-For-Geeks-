class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mp;
        mp[0]=1;
        int prefixsum=0;int count=0;
        for(int x:arr){
            prefixsum+=x;
            if(mp.find(prefixsum-k)!=mp.end())
                count+=mp[prefixsum-k];
                mp[prefixsum]++;
            
        }
        return count;

    }
};