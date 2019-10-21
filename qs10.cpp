#include<iostream>
#include<math.h>
using namespace std;
long long int isprime(long long int n)
{
    if((n%2==0) && (n!=2)){return 0;}
    for(long long int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
        {
           return 0;
        }
    }
    return 1;
}


int main()
{
    long long int n=3,s=2;
    while(n<=2000000)
    {
    if(isprime(n))
    {
       s+=n;
    }
    n+=2;
    }
   cout<<s;
}

