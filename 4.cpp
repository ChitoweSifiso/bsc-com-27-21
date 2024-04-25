#include<iostream>
using namespace std;

int main(){
   int x;
    
    cout<< "Enter an integer value between 5 and 10 "<<endl;
    cin>>x;
    
    while(x < 5 || x > 10){
        
        if(x < 5 || x > 10){
            cout<<"You entered "<<x<<". Please enter a number between 5 and 10 "<<endl;
            cin>>x;
        }
        
        else if(!(x>=5 && x<=10)) {
            cout<<"Sorry, you have entered an invalid number"<<endl;
            cin>>x;

    }
    
    if(x >= 5 && x <= 10){
        cout<<"Your input value("<<x<<") has been accepted";
    }
    
    
    }
    return 0;
}