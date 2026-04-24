class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cntR=0;
        int cntL=0;
        int n =moves.size();
        for(int i =0;i<moves.size();i++){
         if(moves[i]=='L'){
            cntL++;
         }
         else if(moves[i]=='R'){
            cntR++;
         }
         else{
            continue;
         }
        }
 return abs(cntR-cntL)+(n-(cntR+cntL));
    }
};
