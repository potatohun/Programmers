#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(0);
    
    for(int i = 0; i<n;i++)
    {
        if(!visited[i])
        {
            q.push(i);
            
            while(!q.empty())
            {
                int num = q.front();
                visited[num]=true;
                q.pop();
        
                for(int i = 0;i<n;i++)
                {
                    if(computers[num][i]&&visited[i]==false)
                        q.push(i);
                }
            }
            answer++;
        }
    }

    return answer;
}