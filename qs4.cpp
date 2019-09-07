#include<iostream>
using namespace std;
int main()
{
    int i,j,t,n,rem,rev=0,p=0;
    for(i=100;i<1000;i++)
    {
        for(j=100;j<1000;j++)
        {
            n=i*j;
            t=n;
            while(t>0)
            {
                rem=t%10;
                rev=rev*10+rem;
                t=t/10;
            }
            if(rev==n&&n>p)
            {
                p=rev;
            }
            rev=0;
        }
    }
 cout<<"Largest 3 digit product palindrome is : "<<p;
 return 0;
}
