class Solution {
public:
    int getValue(char c){
        if(c=='I') 
        return 1;
        if(c =='V')
        return 5;
        if(c == 'X')
        return 10;
        if(c == 'L')
        return 50;
        if(c == 'C')
        return 100;
        if(c == 'D')
        return 500;
        if(c == 'M')
        return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int result = 0;
        for(int i=0;i<s.size();i++){
            if(i<s.size() - 1 && ((s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) ||
            (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) ||
            (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')))){
                result -= getValue(s[i]);
            }
            else{
                result += getValue(s[i]);
            }
        }
        return result;
    }
};