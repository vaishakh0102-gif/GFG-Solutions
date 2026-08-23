class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        unordered_map<long,long>mpp;
        int maxlen=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0)maxlen=max(maxlen,i+1);
            if(mpp.find(sum)!=mpp.end()){
                int len=i-mpp[sum];
                maxlen=max(maxlen,len);
            }
                
            else
                mpp[sum]=i;
            
        }
        return maxlen;
        
        // code here
        
    }
};
