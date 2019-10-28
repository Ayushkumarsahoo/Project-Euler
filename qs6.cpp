#include<iostream>
using namespace std;

int main()
{
    long long int N=100,sum1=0,sum2=0,diff;
    sum1 =(N*(N + 1))/ 2;
    sum2=(N*(N + 1)*(2*N + 1))/ 6;
    diff=(sum1*sum1)-sum2;
    cout<<diff;

   return 0;
}
