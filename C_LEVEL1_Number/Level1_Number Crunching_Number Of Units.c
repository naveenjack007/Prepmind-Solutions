#include<stdio.h>
int main()
{
    int a,n1,n2,n3,n4;
    scanf("%d",&a);
    n1=a;
    n2=a/10;
    n3=a/100;
    n4=a/1000;
    printf("Number of units : %d\n",n1);
    printf("Number of tens : %d\n",n2);
    printf("Number of hundreds : %d\n",n3);
    printf("Number of thousands : %d\n",n4);

}
