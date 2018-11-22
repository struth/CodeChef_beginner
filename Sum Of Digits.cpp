#include<iostream>

using namespace std;


int main(int argc, char const *argv[]) {
  int t;
  int sum,a;

  cin>>t;
  while(t--)
  {
  sum=0;
  cin>>a;
  while(a)
  {
   sum = sum + a%10 ;
   a = a / 10;
  }
  cout<<sum<<endl;
  }
  return 0;
}
