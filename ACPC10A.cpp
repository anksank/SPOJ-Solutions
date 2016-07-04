#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a =1, b=1, c=1;
    char ans;
    //ans[1] = 'P';
    int result;
    cin>>a>>b>>c;
    while(!((a==0) && (b==0) && (c==0)))
    {
        int diff1 = b-a;
        int diff2 = c-b;
        if(diff1 == diff2)
        {
            ans = 'A';
            result = c+diff2;
        }
        else
        {
            ans = 'G';
            result = c*(c/b);
        }
        cout<<ans<<"P "<<result<<"\n";
        cin>>a>>b>>c;
    }

    return 0;
}
