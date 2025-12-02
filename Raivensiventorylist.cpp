#include <iostream>
#include <string> 
#include <cctype> 

int main() {
    char choice;

    do {
        std::cout << "--- Milktea list ---" << std::endl;
        std::cout << "1. Mocha" << std::endl;
        std::cout << "2. Matcha" << std::endl;
        std::cout << "3. Chocolate" << std::endl;
        
        int menuSelection;
        std::cout << "Enter your choice (1-3): ";
        std::cin >> menuSelection;

        switch (menuSelection) {
            case 1:
                std::cout << "You ordered Mocha!" << std::endl;
                break;
            case 2:
                std::cout << "You ordered Matcha!" << std::endl;
                break;
            case 3:
                std::cout << "You ordered Chocolate!" << std::endl;
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
