#include<vector>
#include<queue>
#include<tuple>
#include<iostream>

using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    
    int n = maps.size(); // 행
    int m = maps[0].size(); // 열
    
    int x_target[4] = {1,-1,0,0}; // 동, 서, 남, 북
    int y_target[4] = {0,0,1,-1}; // 동, 서, 남, 북
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    
    queue<tuple<int,int,int>> q;
    q.push(tuple(0,0,1));
    
    while(!q.empty()){
        int x = 0;
        int y = 0;
        int z = 0;
        
        tie(x,y,z) = q.front();
        q.pop();
        
        visited[x][y] = true;
        
        if(x==n-1 && y==m-1) // 최종목적지 도착
            return z;
        else{
            for(int i = 0 ; i < 4 ; i++){
            int currentPosX = x + x_target[i];
            int currentPosY = y + y_target[i];
            
            // 경계 확인 후, 이동할 수 있는 위치 확인
            if (currentPosX >= 0 && currentPosX < n && currentPosY >= 0 && currentPosY < m 
                && maps[currentPosX][currentPosY] == 1 && !visited[currentPosX][currentPosY]) 
                {
                
                visited[currentPosX][currentPosY] = true;
                q.push({currentPosX, currentPosY, z + 1});
                }
            }
        }
    }
    
    return -1;
}