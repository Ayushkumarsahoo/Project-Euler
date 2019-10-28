#include<iostream>
#include<math.h>
using namespace std;
long int isprime(long int n)
{
    if((n%2==0) && (n!=2)){return 0;}
    for(long int i=3;i<=sqrt(n);i+=2)
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
    long int c=0,n=2;
    while(c<10001)
    {
        if(isprime(n))
        {
            c++;
        }
        n++;
    }
    cout<<"the 10001th prime number is "<<n-1;
}
