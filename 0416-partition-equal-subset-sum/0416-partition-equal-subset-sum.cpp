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
                if(y+x==target){
                return true;}
                else if(x>target){
                    return false;
                }
                if(y+x<target)
                mem.insert(y+x);
                
                mem.insert(y);
            }
            dp= mem;
        }
        return false;
        
    }
};