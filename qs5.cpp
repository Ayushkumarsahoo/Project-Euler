#include<iostream>
using namespace std;

int lcm(int,int);
int hcf(int,int);

int lcm(int a,int b)
{
    int lcm;
    lcm=(a*b)/hcf(a,b);
    return lcm;
}

int hcf(int a,int b)
{
     if (b == 0)
      return a;
   return hcf(b, a % b);
}

int main()
{
    int i,num=1;
    for(i=1;i<20;i++)
    {
       num=lcm(num,i);
    }
    cout<<"smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is "<<num;
    return 0;
}
