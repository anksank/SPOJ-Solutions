#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long int t,n,j,k,sum,i;
    double x;
    cin >> t;
    while(t--)
    {
        cin>>n;
        j=5;
        k=0;
        int y=t;
        sum=0;
        for(i=0;(n/j)>=1;i++){
            x = n/j;
          
            x = floor(x);
            j=j*5;
            k++;
            sum+=x;
        }
        t=y;
        cout <<sum<<"\n";
    }
    return 0;
}
