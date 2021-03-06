//
//  userInterface.cpp
//  AddressBook
//
//  Created by Jake Quinter on 10/1/20.
//

#include "userInterface.h"

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

void userInterface::determineUserInput(int input, addressBookType addBookType)
{
        switch (input) {
            case 1: {
                string lastName;
                cout << "Please enter a last name: ";
                cin  >> lastName;
                cout << endl;
                
                int result;
                result = addBookType.search(lastName);
                
                if (result != -1)
                    cout << lastName << " was found in the address book\n\n";
                else
                    cout << lastName << " was not found in the address book\n\n";
                break;
            }
            case 2: {
                string lastName;
                cout << "Please enter a last name: ";
                cin  >> lastName;
                cout << endl;
                
                int result;
                result = addBookType.search(lastName);
                
                if (result != -1)
                   addBookType.printInfoOf(lastName);
                else
                    cout << lastName << " was not found in the address book\n\n";
                break;
            }
            // find all people with the same birth month
            case 3: {
                int month;
                cout << "Please enter a month: ";
                cin >> month;
                cout << endl;
                
                addBookType.printNameInTheMonth(month);
                break;
            }
            // print the names of the persons between 2 last names
            case 4: {
                string lastNameStart;
                cout << "Please enter a starting last name: ";
                cin >> lastNameStart;
                
                string lastNameEnd;
                cout << "Please enter a ending last name: ";
                cin >> lastNameEnd;
                cout << endl;
                
                int startResult;
                startResult = addBookType.search(lastNameStart);
                
                int endResult;
                endResult = addBookType.search(lastNameEnd);
                
                if (startResult != -1 && endResult != -1) {
                    if (lastNameStart == lastNameEnd) {
                        cout << "Error: Please enter two separate last names\n\n";
                    } else {
                        addBookType.printNamesBetweenLastNames(lastNameStart, lastNameEnd);
                    }
                }
                else
                    cout << "One or both of the last names could not be found in the address book\n\n";
                break;
            }
            // find all people with the same status
            case 5: {
                string status;
                cout << "Please enter a status (Family, Friend, Business): ";
                cin  >> status;
                cout << endl;
                
                addBookType.printNamesWithStatus(status);
                break;
            }
            case 6:
                addBookType.print();
                break;
            // print the person information at a particular index
            case 7:
            {
                int index;
                cout << "Please enter an index: ";
                cin  >> index;
                cout << endl;
                
                addBookType.printAt(index);
                break;
            }
            // not implemented
            case 8:
                cout << "Sorry, 8 doesn't do anything yet :)\n\n";
                break;
            case 9:
                cout << "Goodbye!\n\n";
                break;
            default:
                cout << "Please enter a number 1-9 from the listing above\n\n";
        }
}
