#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,n;
cin>>n;
vector<long long int> v[n+1];
for(i=1;i<=n;i++){
   for(j=1;j<=sqrt(i);j++){
     if(i%j==0){
          v[i].push_back(j);
          if(i/j!=j){
               v[i].push_back(i/j);
          }
     }
   }
   sort(v[i].begin(),v[i].end());
}
for(i=1;i<=n;i++){
     //cout<<"Size of "<<i<<" is : "<<v[i].size()<<endl;
     cout<<"Divisors of "<<i<<" : ";
     //cout<<v[i].size()<<endl;
   for(j=0;j<v[i].size();j++){
          cout<<v[i][j]<<" ";
   }
   cout<<"("<<v[i].size()<<")"<<endl;
}
}

