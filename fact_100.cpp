#include <bits/stdc++.h>
using namespace std;
#define ll long long
int multiply(int [],int,int);
void fact(int n)
{
    int ar[200]={1};
    int ar_size = 1;
    for(int x=2;x<=n;x++)
    {
        ar_size = multiply(ar,ar_size,x);

    }
    for(int i= ar_size-1;i>=0;i--)
    {
        cout<<ar[i];
    }
    cout<<endl;
}
int multiply(int ar[],int res_size,int x)
{
    int carry=0;
    for(int i=0;i<res_size;i++)
    {
        int prod= x*ar[i]+carry;
        ar[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        ar[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll t=0;
     cin>>t;
     while(t--)
     {
         ll n;
         cin>>n;
         fact(n);
     }

  return 0;
}
