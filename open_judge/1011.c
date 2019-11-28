#include <stdio.h>
int main(){
    int n;
    scanf("%d", & n);
    n = n > 0 ? n : -n;
    printf("%.4lf",sqrt(n));
}