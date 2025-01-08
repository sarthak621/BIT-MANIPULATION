class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        //bruteforce approach
        int n=nums.size();
        int subset=1<<n;
        vector<vector<int>>ans;

        for(int num=0;num<subset;num++){
            vector<int>list;
            for(int i=0;i<n;i++){
                if(num & 1<<i){
                    list.push_back(nums[i]);
                }
            }
            ans.push_back(list);
        }
        return ans;
    }
};