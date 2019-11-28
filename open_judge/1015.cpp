#include<stdio.h>
int main(){
    int x, y, z, a;
    scanf("%d%d%d", &x, &y, &z);
    if(x>y){
        a=x;
        x=y;
        y=a;
    }
    if(x>z){
        a=x;
        x=z;
        z=a;
    }
    if(y>z){
        a=y;
        y=z;
        z=a;
    }
    printf("%d %d %d",x,y,z);
    return 0;
}