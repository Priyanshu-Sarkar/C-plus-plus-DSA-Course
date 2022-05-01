#include <iostream>
using namespace std;

int main(){
    int savings;
    cin>>savings;

    if(savings<2000){
        cout<<"Veg Plaza";
    } else if(savings<5000){
        cout<<"Veera Da Dhaba";
    } else {
        cout<<"Deltin";
    }

    return 0;
}