#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
bitset<mx>a;

int main()
{
     optimize();
long long int n,i,j;
cin>>n;
//memset(a,0,sizeof(a));
a[2]=0;
for(i=4;i<=n;i=i+2){
     a[i]=1;
}
for(i=3;i<=sqrt(n);i=i+2){
     for(j=i*i;j<=n;j=j+(i+i)){
          a[j]=1;
     }
}
for(i=1;i<=n;i++){
    if(!a[i]){
     cout<<i<<" ";
    }
}
cout<<endl;
}
//O(N log (log N))


