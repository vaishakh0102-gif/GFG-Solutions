class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
      //Brute Force Approach - O(N^2) Time Complexity
        int n=arr.size();
        vector<int>ans;
        for (int i=0;i<n;i++){
            
            bool is_leader=true;
            for (int j=i+1;j<n;j++){
                if (arr[j]>=arr[i]){
                    is_leader=false;
                    break;
                }
            }
            if (is_leader)ans.push_back(arr[i]);
        }
        return ans;
        // code here
        
    }
};
