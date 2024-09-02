#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    int n = 1;

    switch(ch){
        case 'A':
            cout<<"Capital A";
            break;
        case 'a':
            cout<<"Small a"<<endl;
        default:
            switch(n){
                case 0:
                    cout<<"But the number is zero";
                    break;
                case 1:
                    cout<<"But the number is one";
                    break;
            }
    }
}
