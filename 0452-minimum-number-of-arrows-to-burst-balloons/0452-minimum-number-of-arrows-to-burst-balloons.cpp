class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(), points.end(), [](const auto v,const auto w){return v[1]<w[1];});
        int count=0;
        long current= LONG_MIN;
        for(auto x: points){
            if(x[0]<=current){
                continue;
            }
            current = x[1];
            count++;
        }
        return count;
    }
};