#include<iostream>
using namespace std;
int count=0;
int expo(int m, int n)
{
  count++;
 if(n==0)
 return 1;
 if(n%2==0)
 return expo(m*m,n/2);
 else
 {
 return m*expo(m*m,(n-1)/2);
 }
}
int main()
{
 int m,n;
 cout<<"enter the expoenet"<<endl;
 cin>>m;
 cout<<"enter the power "<<endl;
 cin>>n;
 cout<<"expo power of the value are:"<<expo(m,n)<<endl;
 cout<<count<<endl;
 return 0;
 
}

