#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int n,i,j;
     cin>>n;
     //long long int i,j;
     vector<long long int> v;
     memset(a,0,sizeof(a));
     //cout<<a[0]<<endl;
     for(i=2;i<=n;i++){
          for(j=i+i;j<=n;j=j+i){
                     //cout<<a[i]<<endl;
               a[j]=1;
          }
     }
      for(i=1;i<=n;i++){
           if(a[i]==0){
               v.push_back(i);
           }
      }

     //cout<<v.size()<<endl;
     for(i=0;i<v.size();i++){
          cout<<v[i]<<" ";
     }
}


