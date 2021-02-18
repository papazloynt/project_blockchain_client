
// private files
#include "client.hpp"

// c++ headers
#include <iostream>
#include <memory>



int main(int argc, char** argv) {
    BlockChainClient client;

    std::cout << "Welcome to our service, in order to"
                 " start working with it, you need to log in"
                 " or register.\n"
              << "Press 1 to enter the system.\n"
              << "Press 2 to register in the system." << std::endl;
    short p;
    std::cin >> p;

    while ( (p != 1) && (p != 2) ) {
        std::cout << "Unknown command! "
                     "Please enter correct command number"
                  << std::endl;
        std::cin >> p;
    }

    if (p == 1) {
        std::cout << "Please input your login:" << std::endl;
        std::string name;
        std::cin >> name;

        std::cout << "Please input your password:" << std::endl;
        std::string password;
        std::cin >> password;

        if (client.Authorization(name, password) == OK) {
            std::cout << "You have successfully logged in!" << std::endl
                      << std::endl << std::endl;
        } else {
            std::cout << "Wrong login or password! Please try again." << std::endl;
            return 1;
        }
    } else {
        std::cout << "Please input your login:" << std::endl;
        std::string name;
        std::cin >> name;

        std::string pass = client.Registration(name);

        if (pass != "") {
            std::cout << "You have successfully registered,"
                         " your password:" << std::endl
                      << pass << std::endl
                      << "Don't forget it" << std::endl;
        } else {
            std::cout << "Something went wrong,"
                         " please try again later.\n" <<
                      "Most likely, the name you are entering"
                      " already exists." << std::endl;
            return 2;
        }
    }


    while (true) {
        std::cout << "Service functionality:\n"
                     "Enter 1 to make a transaction.\n"
                     "Enter 2 to top up your balance.\n"
                     "Enter 3 to get balance data.\n"
                     "Enter 4 to log out." << std::endl;
        std::cin >> p;
        if ( p == 1) {
            std::cout << "Please enter the username to whom"
                         " you want to transfer tokens: " << std::endl;
            std::string name_to;
            std::cin >> name_to;

            std::cout << "Enter the amount to transfer: " << std::endl;
            uint32_t sum;
            std::cin >> sum;

            if (client.Transaction(name_to, sum) == OK) {
                std::cout << "Transaction completed successfully" << std::endl;
            } else {
                std::cout << "There is no such user or you do not have enough tokens." << std::endl;
            }
        } else if (p == 2) {
            std::cout << "Please input the amount "
                         "you want to deposit." << std::endl;
            uint32_t sum;
            std::cin >> sum;

            if (client.AddSum(sum) == OK){
                std::cout << "You have successfully deposited "
                             "the amount into your account." << std::endl;
            } else {
                std::cout << "Something went wrong,"
                             " please try again later." << std::endl;
            }
        } else if (p == 3) {
            std::string balance = client.GetInfo();

            if (balance != "") {
                std::cout << "Your balance = " << balance
                          << " tokens." << std::endl;
            } else {
                std::cout << "Something went wrong,"
                             " please try again later." << std::endl;
            }
        } else if (p == 4) {
            std::cout << "Goodbye :)" << std::endl;
            return 0;
        } else {
            std::cout << "Unknown command!";
        }
    }
}

