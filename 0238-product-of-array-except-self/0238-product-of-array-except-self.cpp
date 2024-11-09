class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> lr;
        deque<int> rl;
        int left=1;
        int right=1;
        for(auto x: nums){
            left= x* left;
            lr.push_back(left);
        }
        for(int i=n-1;i>=0; i--){
            right= nums[i]* right;
            rl.push_front(right);
        }
        left=1;
        right=1;
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(i+1<n && i-1>=0)
            ans.push_back(rl[i+1]* lr[i-1]);
            else if(i+1<n){
                ans.push_back(rl[i+1]* 1);
            }
            else{
                ans.push_back(1* lr[i-1]);
            }
        }
        return ans;
    }
};