#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
    char a;
    cin>>a;
    if('a' <= a and a <= 'z'){
        a += 'A' - 'a';
    }else{
        a += 'a' - 'A';
    }
    cout<<a<<endl;
} 