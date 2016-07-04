#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    int a;
    long int b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int ans = a;
        int newB = (b%4)+4;
        for(int i=1;i<newB;i++)
        {
            ans = (ans%10)%10;
            ans = ans*a;
        }
        if(b==0) cout<<1<<"\n";
        else cout<<(ans%10)%10<<"\n";
    }
    return 0;
}
