#include<iostream>
using namespace std;
int stack_top = -1;
char opstack[100];
void pop()
{
    //cout<<"m here";
    cout<<opstack[stack_top];
    stack_top-=2;
    //code to pop till a left paranthesis comes.
}
int main()
{
    int t,i;
    string exp;
    cin>>t;
    while(t--){
        cin>>exp;
        for(i=0;exp[i]!='\0';i++){
            if (exp[i]=='(')
                opstack[++stack_top]=exp[i];
            else if(exp[i]==')'){
                pop();  }
            else if(exp[i]>=97 && exp[i]<=122)
                cout<<exp[i];
            else if ((stack_top == 0)|| (opstack[stack_top]=='('))
                opstack[++stack_top]=exp[i];
            else opstack[++stack_top]=exp[i];
        }
       // pop();
       cout<<"\n";
    }
    return 0;
}
