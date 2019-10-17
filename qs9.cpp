#include<iostream>
using namespace std;
int main()
{
    int a,b,c,m=2,n;
    while(1)
    {
        for(n=1;n<m;n++)
        {
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;
            if(a*a+b*b==c*c)
             {

              if((a+b+c)==1000)
               {

                cout<<a*b*c;
                return 0;
               }
             }

        }
        m++;

    }

}
