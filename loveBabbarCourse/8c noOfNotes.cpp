#include<iostream>
using namespace std;

int main(){
    int money;
    cout<<"Enter amount of money: ";
    cin>>money;
    switch(1){
        case 1:
            cout<<"No of 500 rupee notes: "<<money/500<<endl;
            money%=500;
        case 2:
            cout<<"No of 100 rupee notes: "<<money/100<<endl;
            money%=100;
        case 3:
            cout<<"no of 10 rupee notes: "<<money/10<<endl;
            money%=10;
        case 4:
            cout<<"no of 1 rupee coins: "<<money;
    }
}
