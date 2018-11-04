#include<iostream>

using namespace std;

int main()
{
int n,t,count=0;
long int k;

cin>>n>>k;

while(n--)
{
   cin>>t;
   if(t%k==0 && t>=k)
   count++;
}
cout<<count;

  return 0;
}
