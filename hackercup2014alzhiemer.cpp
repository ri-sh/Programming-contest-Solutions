#include<iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;
int gcd (int a,int b)
{
int c;
while(b)c=a%b,a=b,b=c;
return a;
}

int main()
{freopen ("preventing_alzheimers.txt", "rt", stdin);
    freopen("out1.txt","wt",stdout);
    int n,t ,sum=0,sum2=0,k,i,j,check[20000],mod=1;
    scanf("%d",&t);
    while(t-- )
    {

        scanf("%d",&n);
        scanf("%d",&k);
    int a[n];
sum=0;sum2=0;
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        check[i]=0;

    }
 // std::sort( a,( a + sizeof (a)) / sizeof (a[0]);

    for(i=1; i<n ;i++)
    {
        for (j=0; j<i; j++)
         {
if(gcd(a[i],a[j])<k)
  {
if(a[j]%k!=0)
    a[j]=(a[j]-(a[j]%k))+k;
a[i]=(a[i]-(a[i]%k))+k;
  }
        else if ( gcd(a[i],a[j])>k)

        {
        a[i]=(a[i]-(a[i]%k))+k ;
        if(check[j]>1){a[j]=(a[j]-(a[j]%k))+k;
       //if(check[j]>1){a[j]=(a[j]-(a[j]%k))+k;
        check[j]-=1;}
        }

         else check[j]++;
    }
    }

    for (i=0; i<n ; i++)
        {//cout<<a[i];
        sum2+=a[i];
        }
   printf("Case #%d: %d\n", mod++,sum2-sum);

    }
    return 0 ;

}
