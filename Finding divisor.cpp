#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a=1,b;
  cin>>n;
  b=n;
  while(a<=b){
  if(n%a==0){
    // int z=n/a;
     b=n/a;
          cout<<a<<" x "<<b<<endl;
  }
 a++;
}
}
