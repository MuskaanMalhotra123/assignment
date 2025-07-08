#include <stdio.h>

int main() {
    int n ,a, temp;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the 2nd number");
    scanf("%d",&a);
    temp=n;
    n=a;
    a=temp;
   printf("%d ,%d",n,a);
    
    
}