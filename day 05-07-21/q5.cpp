int numRookCaptures(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size(),x=0,y=0;
		
        //find the position of 'R'
		
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='R'){
                    x=i;
                    y=j;                    
                    break;
                    
                }
            }
        }                
        int ans=0;
		
		//Find Upper Side  of R
        for(int i=x-1;i>=0;i--){
            if(board[i][y]=='B') break;
            else if(board[i][y]=='p'){                
                ans++;
                break;
            }
        }
		
		////Find Lower Side  of R
        for(int i=x+1;i<m;i++){
            if(board[i][y]=='B') break;
            else if(board[i][y]=='p'){
                ans++;
                break;
            }
        }
		
		////Find Left Side  of R
        for(int i=y-1;i>=0;i--){
            if(board[x][i]=='B') break;
            else if(board[x][i]=='p'){
                ans++;
                break;
            }
        }
		
		//Find Right Side  of R
        for(int i=y+1;i<n;i++){
            if(board[x][i]=='B') break;
            else if(board[x][i]=='p'){
                ans++;
                break;
            }
        }
        return ans;
    }
