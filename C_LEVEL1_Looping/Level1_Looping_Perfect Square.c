#include <stdio.h>
#include <math.h>
int main()
{
int num;
int iVar;
float fVar;
scanf("%d",&num);
fVar=sqrt((double)num);
iVar=fVar;
if(iVar==fVar)
printf("Yes");
else
printf("No");
return 0;
}
