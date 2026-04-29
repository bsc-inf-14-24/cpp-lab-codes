#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    int daysUntilExpiration = rand() % 12;

    cout<< "Days until expiration: "<< daysUntilExpiration << endl;

    if(daysUntilExpiration <= 10){
        cout << "Your subscription will expire soo.Renew now! ";
    }
    else if(daysUntilExpiration <= 5) {
        cout << "Your subscription expires in"<< daysUntilExpiration
            <<"days.\n Renew now and save 10%!";
    }
    else if(daysUntilExpiration == 1) {
        cout << "Your subscription expires in a day!\n Renew now and save 20%";
    }
    else if(daysUntilExpiration == 0){
        cout<<"your subscription has expired.";
    }
    else{
        cout <<"You have an active subsciption.";
    }

    return 0;
}