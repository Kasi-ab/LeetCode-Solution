class Solution {
public:
    int hammingWeight(int n) {
       int output =__builtin_popcount(n);
       return output;
    }
};
