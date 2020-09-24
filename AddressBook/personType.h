//
//  personType.h
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#ifndef personType_h
#define personType_h

#include <string>
 
using namespace std;

class personType
{
public:
    void print() const;
    void setName(string first, string last);
    void getName(string &first, string &last);
    personType(string first, string last);
    personType();

 protected:
    string firstName;
    string lastName;
};

#endif
