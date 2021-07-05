class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int R = -1,C = -1;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(board[i][j] == 'R'){
                    R=i;
                    C=j;
                    break;
                }
            }
            if(R != -1 && C != -1){
                break;
            }
        }
        int ans=0;
        
        //upwards
        int rt=R, ct=C;
        while(rt >= 0){
            if(board[rt][ct] == 'B'){
                break;
            }
            if(board[rt][ct] == 'p'){
                ans++;
                break;
            }
            rt--;
        }
        
        //downwards
        rt=R; ct=C;
        while(rt < 8){
            if(board[rt][ct] == 'B'){
                break;
            }
            if(board[rt][ct] == 'p'){
                ans++;
                break;
            }
            rt++;
        }
        
        //right
        rt=R; ct=C;
        while(ct < 8){
            if(board[rt][ct] == 'B'){
                break;
            }
            if(board[rt][ct] == 'p'){
                ans++;
                break;
            }
            ct++;
        }
        
        //left
        rt=R; ct=C;
        while(ct >= 0){
            if(board[rt][ct] == 'B'){
                break;
            }
            if(board[rt][ct] == 'p'){
                ans++;
                break;
            }
            ct--;
        }
        return ans;
    }
};
