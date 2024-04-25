#include<iostream>
using namespace std;

int main(){

    // pseudo-random = NOT truly random(but close)
    srand(time(NULL));

    // will give random numbers from 0 to 11
    int daysUntilExpiration =(rand() % 12);

    switch(daysUntilExpiration){
        case 0:
            cout<<"Your subscription has expired.";
            break;

        case 1:
            cout<<"Your subscription expires within a day!"<<endl;
            cout<<"Renew now and save 20%!";
            break;

        case 2 ... 5:
            cout<<"Your subscription expires in "<<daysUntilExpiration<<" days, Renew now and save 10%!";
            break;

        case 6 ... 10:
            cout<<"Your subscription will expire soon. Renew now!";
            break;

        default:
            cout<<"You have an active subscription.";
            break;
    }

    return 0;
}