class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto x: nums){
            sum+=x;
        }
        if(sum%2!=0)
        return false;
        int target= sum/2;
        

        unordered_set<int> dp({0});
        unordered_set<int> mem;
        for( auto x: nums){
            mem={};
            for(auto y: dp){
                
                mem.insert(y+x);
                if(y+x==target)
                return true;
                mem.insert(y);
            }
            dp= mem;
        }
        return false;
        
    }
};