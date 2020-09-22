//
//  main.cpp
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#include <iostream>

using namespace std;

#include "info.h"
#include "addressType.h"

int main(int argc, const char * argv[]) {
    
    // info
    info myInfo;
    myInfo.identify("Week 3: Address Book");
    
    // addressType test
    addressType testAddress("123 North Water St.", "Boston", "MA", "01121");
    testAddress.print();
    
}
