#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    double N,res;
    cin>>t;
    while(t--){
        cin>>N;
        res = 1;
        for(i = 1; i < N; i++){
            res = res + ((float)(N/i));
        }
        printf("%.2f\n",res);
        //cout << res<<"\n";
    }
    return 0;
}
