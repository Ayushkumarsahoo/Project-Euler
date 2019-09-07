#include<iostream>

using namespace std;
int main()
 {
    long a=1;
    long b=2;
    long c=0;
    long sum=0;

    while(c<4000000)
    {
        c=a+b;
        a=b;
        b=c;
        if(c%2==0)
        {
            sum=sum+c;
        }
    }
   cout<<"sum of the even-valued terms below 4 million is "<<sum+2;
   return 0;
}
