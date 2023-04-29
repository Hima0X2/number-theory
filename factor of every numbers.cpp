#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,n;
cin>>n;
vector<long long int> v[n+1];
for(i=1;i<=n;i++){
   for(j=i;j<=n;j=j+i){
          v[i].push_back(j);
     }
}
for(i=1;i<=n;i++){
     cout<<"Factor of "<<i<<":";
   for(j=0;j<v[i].size();j++){
          cout<<v[i][j]<<" ";
   }
   cout<<endl;
}
}
//time complexity n*ln(n)


