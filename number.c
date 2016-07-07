#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,a=1,k=0;
int b[1000]={0,1};
b[0]=3;
b[1]=4;
for(m=0;m<1000;m++)
{
b[++k]=(b[m]*10)+3;
b[++k]=(a*10)+4;
}
scanf("%d",&n);
printf("%d",b[n-1]);
getch();
}
