#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(int a, int b) {
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(b) + to_string(a);
    return s1 > s2;
}

string solution(vector<int> numbers) {
    string answer = "";
    
    // 사용자 정의 비교 함수로 정렬
    sort(numbers.begin(), numbers.end(), Compare);
    
    // 모든 원소가 0인 경우 처리
    if (numbers[0] == 0) {
        return "0";
    }
    
    // 결과 문자열 생성
    for (int num : numbers) {
        answer += to_string(num);
    }
    
    return answer;
}
