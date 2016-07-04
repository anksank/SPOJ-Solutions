#include<iostream>
using namespace std;
int main()
{
    int t,x,y,ans;
    cin>>t;
    while(t--){
        ans = -1;
        cin>>x>>y;
        if(x==y){
            if(x%2==0) ans = x*2;
            else ans = (x*2)-1;
        }
        else {
            if ((x-2)== y){
                if(x%2==0) ans = (x*2)-2;
                else ans = (x*2)-3;
            }
            else cout<<"No Number\n";
        }
        if(ans!=-1) cout<<ans<<"\n";
    }
    return 0;
}
