#include <string>
#include <vector>

using namespace std;

int dfs(vector<int> numbers, int target, int index, int currentValue){
    if(index==numbers.size()){
        if(currentValue==target)
            return 1;
        else
            return 0;
    }
    
    return dfs(numbers, target, index+1, currentValue + numbers[index]) + dfs(numbers, target, index+1, currentValue - numbers[index]);
}

int solution(vector<int> numbers, int target){
    return dfs(numbers, target, 0, 0);
}