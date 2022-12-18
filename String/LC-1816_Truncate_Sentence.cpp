class Solution {
public:
    string truncateSentence(string s, int k) {
        int count= 0,pos = 0;
        string res;
        for(int i = 0;i<s.length(); i++){
            if(s[i]==' '){
                count++;
            }
            if(count== k){
                pos = i;
                res = s.substr(0,pos);
                break;
            }

        }
        if(++count == k){
            res =s;
        }
        return res;
    }
};