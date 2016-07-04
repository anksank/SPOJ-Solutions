#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    string input;
    cin>>n;
    char arr[100][100];
    while(n!=0){
        cin>>input;

        for(i=0;(i*n)<input.length();i++){
            for(j=0;j<n;j++){
                if(i%2 == 0)
                    arr[i][j]=input[(i*n)+j];
                else arr[i][j]=input[((i+1)*n) - (j+1)];
            }
        }
        for(k=0;k<n;k++)
            for(j=0;j<i;j++)
                cout<<arr[j][k];
        cout<<"\n";
        cin>>n;
    }
    return 0;
}
