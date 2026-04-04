class Solution {
public:
    int getValue(char c) {
        if (c == 'I') return 1;
        else if (c == 'V') return 5;
        else if (c == 'X') return 10;
        else if (c == 'L') return 50;
        else if (c == 'C') return 100;
        else if (c == 'D') return 500;
        else if (c == 'M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int total=0;
        int n = s.length();
        for(int i=0;i<n;i++){
            int curr=getValue(s[i]);
            int next=getValue(s[i+1]);
            if(i+1<n&&curr<next){
                total -=curr;
            }
            else{
                total +=curr;
            }
        }
        return total;
    }
};
