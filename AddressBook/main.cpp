//
//  main.cpp
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#include "info.h"
#include "userInterface.h"

int main(int argc, const char * argv[]) {
    
    // info
    info myInfo;
    myInfo.identify("Week 4: Address Book");
    
    // address book and user interface code
    addressBookType addBookType;
    userInterface userInterface;
    
    int result = addBookType.loadAddressBook("/Users/jakequinter/Desktop/Ch3_Ex9Data.txt"); // pass in location of file here
    int userChoice = 0;
    
    if (result == -1) {
        cout << "Error: Could not read file.";
        return 0;
    }
    
    while (userChoice != 9) {
        userInterface.showMenu();
        cout << "\nYour Choice: ";
        cin >> userChoice;
        cout << endl;
            
        userInterface.determineUserInput(userChoice, addBookType);
    }
}


