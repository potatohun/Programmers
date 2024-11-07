#include <string>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

int solution(string begin, string target, vector<string> words) {
    queue<tuple<string, int>> q;
    
    q.push(tuple(begin,0));
    
    while(!q.empty())
    {
        string str;
        int count;
        tie(str, count) = q.front();
        q.pop();
        
        if(str==target)
        {
            return count;
        }
            
        
        for(int i=0;i<words.size();i++)
        {
            int sameCnt = 0;
            for(int j=0;j<str.length();j++)
            {
                if(str[j]==words[i][j])
                    sameCnt++;
            }
            
            if(sameCnt==begin.length()-1)
            {
                q.push(tuple(words[i],count+1));
            }
        }
    }
    
    return 0;
}