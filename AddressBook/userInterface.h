//
//  userInterface.hpp
//  AddressBook
//
//  Created by Jake Quinter on 10/1/20.
//

#ifndef userInterface_h
#define userInterface_h

#include "addressBookType.h"

class userInterface
{
public:
    void showMenu();
    void determineUserInput(int input, addressBookType addBookType);
};

#endif 
