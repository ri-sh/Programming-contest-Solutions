#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std ;




int main(){//freopen ("coins_game_example_input.txt", "rt", stdin);
//      freopen("Ysamplecoin.txt","wt",stdout);
int n , c, k,i ,t,p,mod=1,leftcoin,leftjar ;

scanf("%d",&t);

while(t--)
{
   scanf("%d%d%d", &n,&k,&c );
if(n<k)
{
    float m=k;
for(i=2; i<=k ; i++)
if(m/i<=n)
    break;
m=m/i;
cout<<"done\n"<<i;;
if (n-floor(m)<i&&(n-floor(m)!=0))
{
    leftjar=n-floor(m);
    leftjar-=1;
    leftcoin=k%i;

    if(c>leftcoin)
    p=(leftcoin+1)+(c-leftcoin)+leftjar;
else
    p=c;

//cout<<"done#";
}

//cout<<"done2";
 if(n-floor(m)==0)
{//cout<<"done3";
    p=c;
}

}

else if (n>k)
    p=c+(n-k);
else if(n==k)
    p=c;
    printf("Case #%d: %d\n", mod++,p);



    }



return 0 ;
}
