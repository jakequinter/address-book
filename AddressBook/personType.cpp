//
//  personType.cpp
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#include <iostream>
#include <string>
#include "personType.h"

void personType::print() const
{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

void personType::getName(string &first, string &last)
{
    first = firstName;
    last = lastName;
}


personType::personType(string first, string last)

{
    firstName = first;
    lastName = last;
}

personType::personType()
{
    firstName = "";
    lastName = "";
}
