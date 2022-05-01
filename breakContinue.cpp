#include <iostream>
using namespace std;

int main(){
    
    int pocketMoney = 1500;
    for(int i = 0; i<30; i++){
        if(i%2 == 0){
            continue;
        } if (pocketMoney <= 0){
            break;
        }
        cout<<"You can go out today!"<<i<<endl;
        pocketMoney -= 300;
    }

    return 0;
}