//
//  addressBookType.h
//  AddressBook
//
//  Created by Jake Quinter on 9/25/20.
//

#ifndef addressBookType_h
#define addressBookType_h

#include "arrayListType.h"
#include "extPersonType.h"

#include <string>
using namespace std;

class addressBookType : public arrayListType<extPersonType>
{
public:
    addressBookType();
    int loadAddressBook(string path);
    int search(string lName);
    void printInfoOf(string lName);
    void printNameInTheMonth(int month);
    void printNamesBetweenLastNames(string last1, string last2);
    void printNamesWithStatus(string status);
//    void saveData(ofstream&);
    void printAt(int i);
    void print() const;
    
};

#endif
