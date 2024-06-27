#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int timer= 1;
    int attack_cnt=0;
    
    int success = 0;
    int hp = 0;
    int maxhp = 0;
    
    hp = health;
    maxhp = hp;
    
    while(attack_cnt != attacks.size()){
        //공격 받음!
        if(attacks[attack_cnt][0] == timer){
            hp -= attacks[attack_cnt][1];
            if(hp<=0)
                return -1;
            success = 0;
            attack_cnt++;
        }//공격 안받음
        else{
            hp += bandage[1]; //회복
            success++;
            if(success==bandage[0]){
                //추가회복
                hp += bandage[2];
                success = 0;
            }
            if(hp>maxhp) //최대체력 이상 회복 불가
                hp = maxhp;
        }
        //시간
        timer++;
    }
    //종료
    return hp;
}