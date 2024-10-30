#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int solution(vector<int> citations) {
    int size = citations.size();
    
    // 오름차순으로 정렬
    sort(citations.begin(), citations.end());

    // H-Index 계산
    int answer = 0;
    for (int i = 0; i < size; i++) {
        int h = size - i;  // 남은 논문의 개수
        
        // 현재 논문의 인용 횟수가 h 이상인 경우 H-Index 조건을 만족
        if (citations[i] >= h) {
            answer = h;
            break;
        }
    }
    
    return answer;
}