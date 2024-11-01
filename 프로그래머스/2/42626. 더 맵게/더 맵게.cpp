#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    // 초기화
    for(int i =0;i<scoville.size();i++){
        pq.push(scoville[i]);
    }
    
    int count = 0;
    // 섞기 시작
    while(pq.top() < K){
        if(pq.size()<2)
            return -1;
        int s1 = pq.top();
        pq.pop();
        int s2 = pq.top();
        pq.pop();
        
        int mix = s1 + (s2 * 2);
        
        pq.push(mix);
        count++;
    }
    
    return count;
}