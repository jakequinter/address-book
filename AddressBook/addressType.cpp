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
    streetAddress = _streetAddress;
    city = _city;
    state = _state;
    zip = _zip;
}

void addressType::getAddress(string &_streetAddress, string &_city, string &_state, string &_zip)
{
    _streetAddress = streetAddress;
    _city = city;
    _state = state;
    _zip = zip;
}

void addressType::print() const
{
    cout << streetAddress << ", " << city << ", " << state << " " << zip << "\n";
}

