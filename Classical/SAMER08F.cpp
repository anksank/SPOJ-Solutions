#include<iostream>
using namespace std;
int main()
{
    int x,i,sum;
    cin>>x;
    while(x!=0){
        sum = 0;
        for(i=1;i<=x;i++)
            sum+= i*i;
        cout<<sum<<"\n";
        cin>>x;
    }
    return 0;
}
