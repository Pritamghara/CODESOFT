// second task
// SIMLE CALCULATOR

#include<iostream>
using namespace std;
int main(){

    
    int a,b,x;
    char c;
    bool check=true;
    while(check){
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter value of b: ";
    cin>>b;

    cout<<"1.ADDITION\n2.SUBTRACTION\n3.multiplication\n4.  DIVISION\n";
    cout<<"ENTER CHOICE: ";
    cin>>x;
    switch(x){
        case 1:cout<<a+b<<endl;
        break;
        case 2:cout<<a-b<<endl;
        break;
        case 3:cout<<a*b<<endl;
        break;
        case 4:cout<<a/b<<endl;
        break;
        default:cout<<"invalid choice\n";
    }
    cout<<"do you want to continue : Y/N ";
    cin>>c;
    if(c=='N'||c=='n'){
        check=false;
    }
    else if(c=='Y'||c=='y'){
        check=true;
    }
    else{
        cout<<"invalid input";
        break;
    }
 
    }


}