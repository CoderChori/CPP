#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n; 
  int a=0, b=1;
  cout<<a<<" "<<b<<" ";
  for(int i=0;i<n;i++){
    int sum=0;
    sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
  }
}
