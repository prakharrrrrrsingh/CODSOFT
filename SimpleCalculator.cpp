#include<iostream>
using namespace std;

int main(){
    int n,m;
    char a;
    int result;
    cout<<"Input 1st Numbers."<<endl;
    cin>>n;
    cout<<"Input 2nd Numbers."<<endl;
    cin>>m;
    cout<<"Enter operation to perform"<<endl;
    cin>>a;
    switch (a) {
        case '+':
        cout<<"Your answer is "<<n+m<<endl;
        break;
        case '-':
        cout<<"Your answer is "<<n-m<<endl;
        break;
        case '*':
        cout<<"Your answer is "<<n*m<<endl;
        break;
        case '/':
        if(m<=0){
            cout<<"Error because the denominator is 0"<<endl;
        }
        else{
            cout<<"Your answer is "<<n/m<<endl;
            break;
        }
        
    }
    return 0;
}