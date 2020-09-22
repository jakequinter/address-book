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
#include "extPersonType.h"

int main(int argc, const char * argv[]) {
    
    // info
    info myInfo;
    myInfo.identify("Week 3: Address Book");
    
    
    // addressType tests
    // addressType constructor test
    addressType addressTypeConstructor("123 N Water St.", "Boston", "MA", "02212");
    cout << "********** addressType Tests *********\n";
    addressTypeConstructor.print();
    
    
    // addressType.setAddress test
    addressType setAddressTest;
    setAddressTest.setAddress("456 North Ave.", "Nashville", "TN", "00000");
    setAddressTest.print();
    
    
    // addressType.getAddress test
    string streetAddress, city, state, zip;
    
    addressType testAddress("789 S Main St.", "Appleton", "WI", "54915");
    testAddress.getAddress(streetAddress, city, state, zip);
    
    cout << streetAddress << ", " << city << ", " << state << " " << zip << "\n";
    cout << "**************************************\n\n";
    
    
    // extPersonType tests
    // extPersonType constructor test
    extPersonType extPersonTypeConstructorTest("Jake", "Quinter", 12, 27, 1992, "123 Test St.", "Boston", "MA", "02212", "920-123-4567", "Friend");
    cout << "********* extPersonType Tests ********\n";
    extPersonTypeConstructorTest.printInfo();
    
    
    // extPersonType.getAddress test
    string extstreetAddress, extcity, extstate, extzip;
    
    extPersonType getAddressTest("Test", "Address", 1, 1, 2000, "Testing Address", "Test", "Address", "00000", "920-999-8888", "Family");
    getAddressTest.getAddress(extstreetAddress, extcity, extstate, extzip);
    
    cout << extstreetAddress << ", " << extcity << ", " << extstate << " " << extzip << "\n";
    
    
    // extPersonType.getPhoneNumber test
    string phoneNumber;
    
    extPersonType getPhoneNumberTest("Test", "Phone", 1, 1, 2000, "Testing Phone", "Test", "Phone", "00000", "920-999-8888", "Family");
    getPhoneNumberTest.getPhoneNumber(phoneNumber);
    
    cout << "Phone Number Test: " << phoneNumber << "\n";
    

    // extPersonType.getStatus test
    string status;
    
    extPersonType getStatusTest("Test", "Status", 2, 2, 2002, "Testing Status", "Test", "Status", "11111", "111-222-3333", "Family");
    getStatusTest.getStatus(status);
    
    cout << "Status Test: " << status << "\n";
    
    
    // extPersonType.getStatus test
    extPersonType isStatusTest("Test", "Status", 2, 2, 2002, "Testing Status", "Test", "Status", "11111", "111-222-3333", "Family");
    
    cout << "isStatus Test (pass): " << isStatusTest.isStatus("Family") << "\n";
    cout << "isStatus Test (fail): " << isStatusTest.isStatus("test") << "\n";
    
    
    // extPersonType.getDate test
    int month, date, year;
    
    extPersonType getDOBTest("Test", "DOB", 3, 3, 2003, "Testing DOB", "Test", "DOB", "22222", "222-333-4444", "Family");
    getDOBTest.getDOB(month, date, year);
    
    cout << "DOB Test: " << month << "-" << date << "-" << year << "\n";
    cout << "**************************************\n\n";
    
    // extPersonType.setInfo test
//    extPersonType extPersonTypeSetInfoTest;
//    extPersonTypeSetInfoTest.setInfo("Jane", "Doe", 2, 10, 2020, "456 Left Rd.", "Chicago", "IL", "12345", "123-000-1234", "Family Member");
//    extPersonTypeSetInfoTest.printInfo();
}
