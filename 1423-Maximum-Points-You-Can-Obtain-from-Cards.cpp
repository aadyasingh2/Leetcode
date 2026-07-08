class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=k-1;
        int n=cardPoints.size();
        int maxc=0;
        for(int i =l;i<=r;i++){
            maxc+=cardPoints[i];
        }
        r=k;
        l=n-1;
        int sum=maxc;
        while(r>0){
            sum-=cardPoints[--r];
            sum+=cardPoints[l--];
            maxc=max(maxc,sum);
        }
        return maxc;
    }
};