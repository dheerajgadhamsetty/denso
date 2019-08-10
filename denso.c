#include<stdio.h>
int main()
{
   int c1,c2,c3;
   float p1,p2,p3,t;
   float disc=90;
   scanf("%d%d%d",&c1,&c2,&c3);
   p1=(disc*c1)/100;
   p2=(disc*c2)/100;
   p3=(disc*c3)/100;
   t=p1+p2+p3;
   printf("%.1f\n%.1f\n%.1f\n%.1f\n",p1,p2,p3,t);




}
