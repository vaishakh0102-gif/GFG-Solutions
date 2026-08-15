class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        for (int i=0;i<n;i++){
            
            bool Leader=true;
            for (int j=i+1;j<n;j++){
                if (arr[j]>=arr[i]){
                    Leader=false;
                    break;
                }
            }
            if (Leader)ans.push_back(arr[i]);
        }
        return ans;
        // code here
        
    }
};
