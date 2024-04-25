#include<iostream>
using namespace std;

int main(){

    // pseudo-random = NOT truly random(but close)
    srand(time(NULL));

    // will give random numbers from 0 to 11
    int daysUntilExpiration =(rand() % 12);

    if(daysUntilExpiration <= 10 && daysUntilExpiration > 5){

        cout<<"Your subscription will expire soon. Renew now!";

    }

    else if(daysUntilExpiration <= 5 && daysUntilExpiration > 1){

        cout<<"Your subscription expires in "<<daysUntilExpiration<<" days, Renew now and save 10%!";

    }

    else if(daysUntilExpiration == 1 ){

    cout<<"Your subscription expires within a day!"<<endl;
    cout<<"Renew now and save 20%!";

    }

    else if(daysUntilExpiration == 0 ){

        cout<<"Your subscription has expired.";

    }

    else{

        cout<<"You have an active subscription.";

    }

    return 0;

}
