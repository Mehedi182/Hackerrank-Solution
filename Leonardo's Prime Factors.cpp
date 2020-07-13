#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll c=1,b=0,d=0;
     ll  a[18]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61};
     for(i=0;i<17 ;i++)
     {
        c=c*a[i];
        if(c>n)
        {
            b=i;
            break;

        }
     }
     if(n==1) cout<<0<<endl;
     else if(n==2||n==3) cout<<1<<endl;
    else if(b>15) cout<<15<<endl;
    else cout<<b<<endl;
}
return 0;
}

