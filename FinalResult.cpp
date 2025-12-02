#include <iostream>
#include <string> 
#include <cctype> 
using namespace std;
int main() {
    char choice;
int order,no_deals;
    do {
        
cout<<"(1)  Mocha   ₱50 only."<<endl;
    cout<<"(2)  Matcha   ₱50 only."<<endl;
    cout<<"(3)  Chocolate   ₱60 only"<<endl;
    cout<<"Please select the order number: ";
    cin>>order;
    cout<<"Please enter the number of deals: ";
    cin>>no_deals;
    cout<<endl;
switch(order) {
            case 1:
cout<<"Order : Mocha"<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: ₱50 only."<<endl;
        cout<<"Total price : "<<"$"<<50*no_deals<<" "<<"only."<<endl;
        cout<<endl;
                break;
            case 2:
cout<<"Order : Matcha"<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: ₱50 only."<<endl;
        cout<<"Total price : "<<"$"<<50*no_deals<<" "<<"only."<<endl;
        cout<<endl;
                break;
            case 3:
cout<<"Order : Chocolate"<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: ₱50 only."<<endl;
        cout<<"Total price : "<<"$"<<50*no_deals<<" "<<"only."<<endl;
        cout<<endl;
                break;
            default:
                std::cout << "Invalid selection." << std::endl;
                break;
        }

        std::cout << "Do you want to order again? (Y/N): ";
        std::cin >> choice;

        choice = std::toupper(choice); 

    } while (choice == 'Y'); 

    std::cout << "Thank you for your order!" << std::endl;

    return 0;
}
