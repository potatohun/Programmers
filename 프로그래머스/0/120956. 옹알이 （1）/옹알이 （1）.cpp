#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    vector<string> str = {"aya", "ye", "woo", "ma"};
    
    // 모든 babbling을 aya, ye, woo, ma를 => " "로 치환
    for(int i = 0;i<babbling.size();i++){
        for(int j = 0;j<str.size();j++){
            while(babbling[i].find(str[j]) != -1){
                babbling[i] = babbling[i].replace(babbling[i].find(str[j]), str[j].size(), " ");
            }
        }
    }
    
    // 전부 처리 후 " " => ""로 치환, bablling에서 ""인 갯수 리턴
    for(int i = 0;i<babbling.size();i++){
        while(babbling[i].find(" ") != -1){
            babbling[i] = babbling[i].replace(babbling[i].find(" "), 1, "");
        }
        if(babbling[i] == ""){
            answer++;
        }
    }
    
    return answer;
}