//
//  addressType.h
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#ifndef addressType_h
#define addressType_h

#include <stdio.h>
#include <string>

using namespace std;

class addressType
{
public:
    addressType(string _streetAddress = "", string _city = "", string _state = "", string _zip = "");
    void setAddress(string _streetAddress, string _city, string _state, string _zip);
    void getAddress(string &_streetAddress, string &_city, string &_state, string &_zip);
    void getStreetAddress();
    void getCity();
    void print() const;

private:
    string streetAddress;
    string city;
    string state;
    string zip;
};

#endif
