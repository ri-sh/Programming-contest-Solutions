#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<time.h>


using namespace std;

int  getMinSteps ( int n )//unsigned  long long  n )
{
 int *dp ;
 //unsigned long long i;
int i ;

dp=new int [n+1];
dp[1] = 0;
for( i = 2 ; i <= n ; i ++ )
{
dp[i] = 1 + dp[i-1];
if(i%2==0) dp[i] = min( dp[i] , 1+ dp[(int)(i/2)] );
if(i%3==0) dp[i] = min( dp[i] , 1+ dp[(int)(i/3)] );
}
return dp[n];
}

int main()
{time_t start,stop;
int  t,n ,mod=1 ;
int sol;
start=clock(); scanf("%d",&t);
 while(t--)
 {
     scanf("%d",&n);
     sol=getMinSteps(n);
     printf("Case %d: %d\n", mod++,sol);
 }
 stop=clock();
 cout<<"\ntimetake"<<double((start-stop)/CLOCKS_PER_SEC);
    return 0 ;

}
