#include "Headers/Bank_Account.h"
#include "Mysql.cpp"

#include <iostream>
#include <string>

void Bank_Account::addAcc() {
    std::string name, address, pasW;
    int acc, bal;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Address: ";
    std::getline(std::cin, address);

    std::cout << "Enter Account Number: ";
    while (!(std::cin >> acc)) {
        std::cout << "Invalid input. Please enter an integer value: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Enter Password: ";
    std::cin >> pasW;
    // Encrypt or hash the password before storing it

    std::cout << "Enter Balance: ";
    while (!(std::cin >> bal)) {
        std::cout << "Invalid input. Please enter an integer value: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    
    // Output the entered values for verification
    std::cout << "Name: " << name << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Account Number: " << acc << std::endl;
    std::cout << "Balance: " << bal << std::endl;

    std::cout << "Are you sure these are the values you would like to be entered ? ";
    // give chance to redo;

    // Store the account information in the bank's database
    Database db("localhost", "root", "password", "bank");
    if (db.addAccount(name, address, acc, pasW, bal)) {
        std::cout << "Account added successfully." << std::endl;
    }
    else {
        std::cout << "Error, adding the Account";
    }
}

void deleteAcc() {
    int acc = 0;
    std::cout << "Enter Account Number \n";
    std::cin >> acc;
    ////load server
    ////delete account / pass
    ////update server
}

    /// <summary>
    /// check acc can take in a number 1, 2, 3 says if its customer or not
    /// if customer it passes in the customers acc..
    /// </summary> 
void checkAcc() {
    std::string name;
    int acc = 0;
    std::cout << "please Enter Customers Name \n";
    std::getline(std::cin, name);

    std::cout << "Please Enter Customers Account Number \n";
    std::cin >> acc;

    // pull up these from mysql
};
void editAcc() {

};
void checkHistory() {
    std::string name;
    int acc = 0;
    std::cout << "please Enter Customers Name \n";
    std::getline(std::cin, name);

    std::cout << "Please Enter Customers Account Number \n";
    std::cin >> acc;
};
void transfer() {
    int acc = 0, accT = 0, amount = 0;

    std::cout << "Please Enter Customers Account Number \n";
    std::cin >> acc;

    std::cout << "Please Enter Account Number to be transferred to \n";
    std::cin >> accT;

    std::cout << "Please Enter Transfer Amount \n";                // check if they can transfer that ammount
    std::cout << amount;

    /// 
};
void withdrawal() {
    int acc = 0,  amount = 0;

    std::cout << "Please Enter Customers Account Number \n";
    std::cin >> acc;

    std::cout << "Please Enter Withdrawal Amount \n";                // check if they can withdraw that ammount
    std::cout << amount;
};
void deposit() {
    int acc = 0, amount = 0;

    std::cout << "Please Enter Customers Account Number \n";
    std::cin >> acc;

    std::cout << "Please Enter Deposit Amount \n";                // check if they can deposit that ammount
    std::cout << amount;
};

void addEmployee() {
    std::string name, address;
    int empNo;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Address: ";
    std::getline(std::cin, address);
    std::cout << "Enter Employee Number ";      // ideally done auto
    std::cin >> empNo;
};
void deleteEmployee() {
    std::string name;
    int empNo;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Employee Number ";      
    std::cin >> empNo;

    // delete from database
};
void checkEmployee() {
    std::string name;
    int empNo;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Employee Number ";      
    std::cin >> empNo;

    // return employee info from database;
};