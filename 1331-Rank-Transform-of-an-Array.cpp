class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int n=arr.size();
        vector<int> result(n);
        for(int i =0;i<n;i++){
            pq.push({arr[i],i});
        }
        int rank=1;
        while(!pq.empty()){
            int val = pq.top().first;
            int idx = pq.top().second;
            pq.pop();
            result[idx] = rank;
            
            if ( pq.top().first != val){
                rank++;
            }
        }
    return result;
    }
};