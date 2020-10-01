//
//  userInterface.cpp
//  AddressBook
//
//  Created by Jake Quinter on 10/1/20.
//

#include "userInterface.h"

#include <iostream>

using namespace std;

void userInterface::showMenu()
{
    cout << "**************************************\n";
    cout << "Welcome to the Address Book program\n" << endl;
    cout << "Please choose from the following options to get started:\n";
    cout << "\t1: To see if a person is in the address book\n";
    cout << "\t2: Print the information of a person\n";
    cout << "\t3: Print the names of a person having a birthday in a particular month\n";
    cout << "\t4: Print the names of persons between two last names\n";
    cout << "\t5: Print the names of persons having a particular status\n";
    cout << "\t6: Print the address book\n";
    cout << "\t7: Print a person at a particular index\n";
    cout << "\t9: Terminate the program\n";
    
}
