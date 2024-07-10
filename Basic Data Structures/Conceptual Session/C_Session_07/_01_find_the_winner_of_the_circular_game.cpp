//https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
/*
class Solution {
public:
    queue<int> q;
    int findTheWinner(int n, int k) {
        for(int i=1; i<=n; i++){
            q.push(i);
        }
        int cnt=0;
        while(q.size()>1){
            int v = q.front();
            q.pop();
            cnt++;
            if(cnt==k) cnt=0;
            else q.push(v);
        }
        return q.front();
    }
};
*/