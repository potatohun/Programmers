#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    unordered_map<int, int> map;
    
    for(int i =0; i<nums.size();i++){
        map[nums[i]]++;
    }
    
    if(nums.size()/2 <= map.size())
        answer = nums.size()/2;
    else
        answer = map.size();

    return answer;
}