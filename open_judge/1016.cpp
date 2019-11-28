#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    double t;
    cin>>t;
    double ans;
    if(t < 1) ans = t * t;
    else if(t < 2) ans = t * t - 1;
    else ans = t * t - 2 * t +1;
    printf("%.3lf",ans);
}
