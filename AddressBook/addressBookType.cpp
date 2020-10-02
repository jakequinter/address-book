//
//  addressBookType.cpp
//  AddressBook
//
//  Created by Jake Quinter on 9/25/20.
//

#include "addressBookType.h"

#include <fstream>

using namespace std;

addressBookType::addressBookType()
{
    length = 0;
}

int addressBookType::loadAddressBook(string path)
{
    string firstName, lastName;
    int month, day, year;
    string streetAddress, city, state, zip, phoneNumber, status;
    extPersonType tempPerson;
    
    ifstream infile;
    
    infile.open(path);
    
    if(!infile) {
        cout << "File does not exist." << endl;
        return -1;
    }
    
    infile >> firstName >> lastName >> month >> day >> year;
    infile.ignore(100, '\n');
    
    getline(infile, streetAddress);
    streetAddress.erase(std::remove(streetAddress.begin(), streetAddress.end(), '\r'), city.end());
    
    getline(infile, city);
    city.erase(std::remove(city.begin(), city.end(), '\r'), state.end());
    
    getline(infile, state);
    state.erase(std::remove(state.begin(), state.end(), '\r'), zip.end());
    
    infile >> zip >> phoneNumber >> status;
    
    while (infile) {
        tempPerson.setInfo(firstName, lastName, month, day, year, streetAddress, city, state, zip, phoneNumber, status);
        
        insert(tempPerson);
        
        infile >> firstName >> lastName >> month >> day >> year;
        infile.ignore(100, '\n');
        
        getline(infile, streetAddress);
        streetAddress.erase(std::remove(streetAddress.begin(), streetAddress.end(), '\r'), city.end());
        
        getline(infile, city);
        city.erase(std::remove(city.begin(), city.end(), '\r'), state.end());
        
        getline(infile, state);
        state.erase(std::remove(state.begin(), state.end(), '\r'), zip.end());
        
        infile >> zip >> phoneNumber >> status;
    }
    
    return 0;
}

// search for a person with specified last name
int addressBookType::search(string lName)
{
    bool isFound = false;
    int element = -1;
    
    for (int i = 0; i < length; i++) {
        isFound = list[i].isLastName(lName);
        
        if (isFound) {
            element = i;
            break;
        }
    }
    
    return element;
}

// print info of person with specified last name
void addressBookType::printInfoOf(string lName)
{
    int index;
    index = search(lName);
    
    list[index].print();
}

// print names of birth month
void addressBookType::printNameInTheMonth(int month)
{
    bool isFound = false;
    
    for (int i = 0; i < length; i++) {
        if (list[i].isMonth(month)) {
            isFound = true;
            
            list[i].personType::print();
            cout << endl;
        }
    }
    
    if (!isFound)
        cout << "No person(s) with that birth month\n";
    cout << endl;
}

// print the names of the persons between 2 last names
void addressBookType::printNamesBetweenLastNames(string last1, string last2)
{
    for (int i = 0; i < length; i++) {
        if (list[i].isLastName(last1)) {
            for (int j = i; j < length; j++) { // if you don't want to include starting person use j = i + 1
                if (list[j].isLastName(last2)) {
                    list[j].personType::print(); // remove if you don't want to include last person
                    cout << endl;
                    break;
                }
                else {
                    list[j].personType::print();
                    cout << endl;
                }
            }
        }
    }
    cout << endl;
}

// print the person information at a particular index
void addressBookType::printAt(int i)
{
    int length = listSize() - 1;
    
    if (i >= 0 && i <= length) {
        list[i].print();
        cout << endl;
    } else {
        cout << "Error: Invalid index\n\n";
    }
}

// get names of people with the same status
void addressBookType::printNamesWithStatus(string status)
{
    bool isFound = false;
    
    for (int i = 0; i < length; i++) {
        if (list[i].isStatus(status)) {
            isFound = true;
            
            list[i].personType::print();
            cout << endl;
        }
    }
    
    if (!isFound)
        cout << "No person(s) with that status\n";
    cout << endl;
}

void addressBookType::print() const
{
    for (int i = 0; i < length; i++) {
        list[i].print();
    }
}

