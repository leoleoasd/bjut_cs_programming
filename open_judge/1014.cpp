#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<< a%10 << (a / 10 % 10) << (a / 100) <<endl;
}