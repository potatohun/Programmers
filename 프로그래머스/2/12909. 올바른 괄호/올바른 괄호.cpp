#include<string>
#include <iostream>
#include <queue>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    queue<string> q;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            q.push("(");
        }
        else{
            if(q.empty())
                return false;
            else{
                q.pop();
            }
        }
    }
    
    if(q.empty())
        return true;
    else
        return false;
}