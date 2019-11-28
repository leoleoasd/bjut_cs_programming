#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<< (((n / 100) + 1 ) % 10 )<<( ((n / 10) % 10 +1)%10 )<<(n % 10 + 1)% 10;;
} 