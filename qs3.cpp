#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 long long int a=600851475143;
 long int i;
  for(i=2;i<=sqrt(a);i++)
  {
      while(a%i==0)
      {
          a/=i;
      }
  }
  cout<<"the largest prime factor of 600851475143 is "<<a;
  return 0;
}
