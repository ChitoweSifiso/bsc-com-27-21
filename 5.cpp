#include<iostream>
using namespace std;

double x,y,z,a,b;
double squareArea(double x){
cout<<x*x;
    return x*x;
}

double rectangle(double y,double z){
cout<<y*z;
    return y*z;
}

double trianlgeArea(){
cout<<(1/2)*a*b;
    return (1/2)*a*b;
}

int main(){
   
    int area;

    cout<<"";
    cout<<"1. Square";
    cout<<"2. Recangle";
    cout<<"3. Triangle";
    cout<<"4. Quit program";
    cin>>area;

    switch (area){
        case 1:
        cout<<"enter a side length";
        cin>>x;
        double squareArea(x);
         break;

        case 2:
            cout<<"enter length";
            cin>>y;
            cout<<"enter width";
            cin>>z;
            double rectangle(y,z);
            break;

        case 3:
        cout<< "enter basic";
        cin>>a;
         cout<<"enter height";
            cin>>b;
            double trianlgeArea(a,b);
            break;

        case 4:
            return 0;
            break;

        default:
        cout<<"your output was<<x<< please enter a valid input";
        break;
    }
}
