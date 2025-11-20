// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        
        long long sum=0,maxsum=-1;
        int start=0,beststart=-1,bestend=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                sum+=arr[i];
               if(sum>maxsum || sum==maxsum &&(i-start)>(bestend-beststart)){
                maxsum=sum;
                beststart=start;
                bestend=i;
                }
            
            }
            else{
                sum=0;
                start=i+1;
            }
        }
        if(beststart==-1)return {-1};
        vector<int > ans;
        for(int i=beststart;i<=bestend;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};