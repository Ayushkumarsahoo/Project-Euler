#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    while(++i <1000)
       sum+= i%3==0 || i%5==0? i:0;
    cout<<sum;
}
