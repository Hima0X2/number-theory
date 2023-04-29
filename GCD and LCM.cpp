#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,gcd,lcm;
    cin>>a>>b;
    gcd=__gcd(a,b);
    cout<<gcd<<endl;
    lcm=a*(b/gcd);//a*b te renge beshi hote pare tai agge jekono 1 ta agge vag deoa better
    cout<<lcm<<endl;
}
