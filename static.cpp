#include<iostream>
using namespace std;
int m=0;
int fun(int a)
{
  //static int m=0;
  if(a>0)
  {
  m++;
    return fun(a-1)+m;
  
  }
return 0;
}
int main()
{
 int x=5;
 int y=fun(5);
 cout<<y<<endl;
 cout<<m<<endl;
 return 0;
}
