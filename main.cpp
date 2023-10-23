#include <iostream>
#include <string>

using namespace std;

int main() {
    string title = "Bike for sale";
    string description = "A new bike ideal for daily commuting.";
    double price = 350.50;
    string contactInfo = "Tel: (380) 456-7890, E-mail: vlad@email.com";
    cout << "********** SALE NOTICE **********" << endl;
    cout << "Named: " << title << endl;
    cout << "Description: " << description << endl;
    cout << "Price.: " << price << " UAH" << endl;
    cout << "Contact information: " << contactInfo << endl;
    cout << "********************************************" << endl;

    return 0;
}
