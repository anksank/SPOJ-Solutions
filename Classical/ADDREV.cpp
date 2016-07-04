#include<iostream>
using namespace std;
int reverse(int n)
{
    int temp=0;
    while(n!=0)
    {
        temp=(10*temp)+(n%10);
        n=n/10;
    }
    return temp;
}
int main()
{
    int T,i;
    cin>>T;
    while(T--)
    {
        int num1,num2,rev1,rev2;
        cin>>num1>>num2;
        rev1=reverse(num1);
        rev2=reverse(num2);
        int sum=rev1+rev2;
        cout<<reverse(sum)<<"\n";
    }
    return 0;
}
