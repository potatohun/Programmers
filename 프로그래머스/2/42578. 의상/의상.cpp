#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    unordered_map<string, int> map;
    
    for(int i = 0;i<clothes.size();i++){
        map[clothes[i][1]]++;
    }
    
    for(auto i = map.begin(); i != map.end();i++){
        answer *= (i->second + 1);
    }
    
    return answer-1;
}