#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int day = 0;
    int clearCnt = 0;
    
    vector<bool> clear(progresses.size(), false);
    while(clearCnt!=progresses.size()){
        day++;
        
        // 작업 진행
        for(int i = 0;i<progresses.size();i++){
            progresses[i] += speeds[i];
        }
    
        int count = 0;
        
        for(int i = 0;i<progresses.size();i++){
            if((progresses[i]/100)>0&& !clear[i]) // 작업 완료
            {
                if(i==0){
                    clear[i] = true;
                    count++;
                    clearCnt++;
                }
                else{
                    if(clear[i-1]){
                        clear[i] = true;
                        count++;
                        clearCnt++;
                    }
                }
            }
                
        }
    
        if(count>0)
        {
            answer.push_back(count);
        }
    }
    
    return answer;
}