#include <iostream>
#include<stdio.h>
#include <math.h>
using namespace std;

bool isPerfectSquare(unsigned long long int x)
{
  unsigned long  long int s = sqrt(x);
    return (s*s == x);
}

bool isFibonacci(unsigned long long int n)
{

    return isPerfectSquare((5*n*n) + 4) ||
           isPerfectSquare((5*n*n) - 4);
}


int main()

{
    int i,t;
    unsigned long long int n ;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%llu",&n);


     isFibonacci(n)? cout<<"IsFibo":
                     cout <<"IsNotFibo\n" ;

    }
  return 0;
}
