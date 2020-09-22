//
//  addressType.cpp
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#include <iostream>
#include "addressType.h"

addressType::addressType(string _streetAddress, string _city, string _state, string _zip)
{
    streetAddress = _streetAddress;
    city = _city;
    state = _state;
    zip = _zip;
}

void addressType::setAddress(string _streetAddress, string _city, string _state, string _zip)
{
    streetAddress = "14";
}

void addressType::print()
{
    cout << "Street Address: " << streetAddress << "\n";
}

