// 830. Positions of Large Groups
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> res;
        size_t  k{s.length()};
        int i{1}, start{0};
        if (k<3) return res;
        for (; i<k; i++){
            if (s[i]!= s[start]){
                if ((i-start)>=3) res.push_back({start, i-1});
                start = i;
            }
        }
        if ( start <= k-3) res.push_back({start, i-1});
        return res;
    }
};
