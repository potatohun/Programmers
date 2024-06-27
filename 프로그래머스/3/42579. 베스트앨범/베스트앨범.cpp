#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    unordered_map<string, int> genres_play_count;
    unordered_map<string, multimap<int, int>> playlist;
    
    for(int i = 0;i<genres.size();i++){ 
        genres_play_count[genres[i]] += plays[i]; // 장르별 총 플레이 수 정리
    }
    
    for(int i = genres.size()-1; i >= 0 ;i--){
        playlist[genres[i]].insert(pair<int,int>(plays[i], i)); // 고유 번호는 내림 차순, 재생수는 오름차순으로 각 mulitmap에 저장
    }
    
    map<int, string> genres_play_count_sort; // 맵을 활용하여 오름차순으로 정렬
    
    for(auto iter = genres_play_count.begin(); iter != genres_play_count.end(); iter++)
    {
        genres_play_count_sort[iter->second] = iter-> first; // value를 기준으로 정렬
    }
    
    for(auto iter = genres_play_count_sort.rbegin(); iter != genres_play_count_sort.rend(); iter++) // 큰 수 부터 출력 rbegin, rend 키워드 사용
    {
        std::cout << iter->first << ":" << iter->second << std::endl;
        
        int twice = 0;
        for(auto it = playlist[iter->second].rbegin(); it != playlist[iter->second].rend();it++) // 각 multimap에서 재생수의 내림차순, 고유 번호 오름 차순으로 출력
        {    
            answer.push_back(it->second);
            twice++;
            if(twice==2) // 두번 입력 했을 경우 입력 종료
                break;
        }
    }
    
    return answer;
}