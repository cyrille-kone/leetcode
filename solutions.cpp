#include<vector>
#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    /* 830. Positions of Large Groups*/
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
    
    /* 2243. Calculate Digit Sum of a String */
    string digitSum(string s, size_t k) {
        string res{s};
        std::stringstream ss;
        int total, add;
        while(res.length() > k){
            for(size_t i=0; i < res.length(); i+=k){
                add = min(k, res.length() - i);
                total = 0;
                for(size_t j=i; j<i+add;j++){
                    total += res[j] - '0';
                }
                ss<<total;
            }
            res = ss.str();
            ss.str(string());
        }
        return res;
    }
    /*2278. Percentage of Letter in String*/
    int percentageLetter(string s, char letter) {
        size_t freq {0};
        for (auto ss: s) freq += (ss==letter)?1:0;
       return (100*freq) / s.size();  
    }
    
};



