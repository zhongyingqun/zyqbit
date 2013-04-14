#include<stdio.h>
#define N 3
void main()
{
   int  a,b,i,x[N]={1,0,0},y[N]={1,0,0},t[N]={0,0,0};
   scanf("%d %d",&a,&b);
   for(i=a;i<b;i++)
   {
	   t[2]=x[2];x[2]=y[2];y[2]=x[2]+t[2];
	   t[1]=x[1];x[1]=y[1];y[1]=x[1]+t[1];
	   t[0]=x[0];x[0]=y[0];y[0]=x[0]+t[0];
	   if (y[0]>=1000000000) {y[1]++;y[0]=y[0]%1000000000;}
       if (y[1]>=1000000000) {y[2]++;y[1]=y[1]%1000000000;}
   }
   if(x[1]==0) printf("%d\n",x[0]);
   else if (x[2]==0) printf("%d%.9d\n",x[1],x[0]);
   else printf("%d%.9d%.9d\n",x[2],x[1],x[0]);
}
