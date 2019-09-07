#include<iostream>

using namespace std;
int main()
{
    int i;
    double sum=0;

    for(i=1;i<=1000;i++)
    {
        if((i%3)||(i%5))
           {
               sum+=i;
           }
    }
    cout<<"The sum of all the numbers that are divisible by 3 and 5 and are below 1000 are "<<sum;
  return 0;
}
