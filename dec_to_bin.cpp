#include <iostream>
#include<math.h>
using namespace std;

int main() {
  int n; 
  cin>>n;
  int i=0;
  int ans=0;
  while(n!=0){
    int bit=n&1;
    ans = (bit*pow(10,i))+ans;
    n = n>>1;
    i++;
  }
  cout<<ans<<endl;
}

/*
i/p: 5
o/p: 101
*/
