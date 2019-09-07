#include<iostream>
using namespace std;

int main()
{
    long long int i,sum1=0,sum2=0,diff;
    for(i=1;i<=100;i++)
    {
        sum1+=(i*i);
        sum2+=i;
    }
    sum2=(sum2*sum2);
    diff=sum1-sum2;
    cout<<"the difference is"<<diff;

   return 0;
}
