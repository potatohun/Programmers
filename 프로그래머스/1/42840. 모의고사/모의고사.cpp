#include <string>
#include <vector>

using namespace std;

vector<int> p1 = {1,2,3,4,5};
vector<int> p2 = {2,1,2,3,2,4,2,5};
vector<int> p3 = {3,3,1,1,2,2,4,4,5,5};

vector<int> solution(vector<int> answers) {
    int s1=0;
    int s2=0;
    int s3=0;
    
    vector<int> answer;
    
    for(int i = 0;i<answers.size();i++){
        if(answers[i]==p1[i%p1.size()])
            s1++;
        if(answers[i]==p2[i%p2.size()])
            s2++;
        if(answers[i]==p3[i%p3.size()])
            s3++;
    }
    
    int max = 0;
    if(max<s1)
        max=s1;
    if(max<s2)
        max=s2;
    if(max<s3)
        max=s3;
    
    if(max==s1)
        answer.push_back(1);
    if(max==s2)
        answer.push_back(2);
    if(max==s3)
        answer.push_back(3);
    
    
    return answer;
}