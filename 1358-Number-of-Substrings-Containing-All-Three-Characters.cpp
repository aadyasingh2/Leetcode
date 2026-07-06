class Solution {
public:
    int numberOfSubstrings(string s) {
        int substring=0;
        int count[3]={0};
        int n=s.size();
        int l=0;
        for(int r =0;r<n;r++){
            count[s[r]-'a']++;
            while (count[0] > 0 && count[1] > 0 && count[2] > 0){
                count[s[l]-'a']--;
                l++;
                substring+=n-r;
            }
        }
        return substring;

    }
};