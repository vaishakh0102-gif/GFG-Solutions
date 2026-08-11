class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n=arr.size();
        map<long long,int>mpp;
        long long sum=0;
        int maxLen=0;
        for (int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k){
                maxLen=max(maxLen,i+1);
            }
            
            long long rem=sum-k;
            if (mpp.find(rem) !=mpp.end()){
                int len= i-mpp[rem];
                maxLen=max(maxLen,len);
            }
            
            if (mpp.find(sum)==mpp.end()){
                mpp[sum]=i;
            }
        }
        return maxLen;
        
                // code here
        
    }
};
