#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for (int i = 0; i < priorities.size(); i++) {
        q.push({priorities[i], i}); // {우선순위, 인덱스} 저장
        pq.push(priorities[i]);     // 우선순위 큐에 우선순위 추가
    }
    
    while (!pq.empty()) {
        auto current = q.front();
        q.pop();
        
        if (current.first == pq.top()) { // 우선순위가 가장 높은 경우
            pq.pop();
            answer++;
            if (current.second == location) {
                break; // 목표 문서를 처리한 경우
            }
        } else {
            q.push(current); // 우선순위가 낮으면 뒤로 보냄
        }
    }
    
    return answer;
}