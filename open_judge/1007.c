#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.2lf\n", (double)( c * c * sin(a * 3.14159 / 180.0) * sin(b * 3.14159 / 180.0) / ( 2 * sin((a+b) * 3.14159 / 180))) );
}