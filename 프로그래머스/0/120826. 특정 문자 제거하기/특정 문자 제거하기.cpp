#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = my_string;
    while(answer.find(letter) != -1){
        answer = answer.replace(answer.find(letter), 1, "");
    }
    return answer;
}