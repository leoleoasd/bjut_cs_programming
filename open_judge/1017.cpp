#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if( n == 100){
        cout<<"FULL MARKS"<<endl;
    }else if(n > 100 or n < -1){
        cout<<"ERROR"<<endl;
    }else if(n==-1){
        cout<<"ABSENT"<<endl;
    }else if(n >= 90){
        cout<<"A+"<<endl;
    }else if(n >= 80) {
        cout<<"A"<<endl;
    }else if(n >= 70){
        cout<<"B"<<endl;
    }else if(n >= 60){
        cout<<"C"<<endl;
    }else {
        cout<<"D"<<endl;
    }
    return 0;
}