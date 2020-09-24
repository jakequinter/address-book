//
//  main.cpp
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#include <iostream>

using namespace std;

#include "info.h"
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
    
    
    
    // extPersonType setInfo test
    extPersonType setInfo1Test;
    setInfo1Test.setInfo("Ethan", "Smith", 5, 14, 2015, "E 456 St.", "San Diego", "CA", "91091", "019-283-7465", "Friend");
    setInfo1Test.printInfo();
    
    
    
    // extPersonType setInfo test
    dateType dob = dateType(8, 21, 1991);
    addressType address = addressType("987 Worm Rd.", "Oshkosh", "WI", "04290");
    extPersonType setInfoTest2;
    setInfoTest2.setInfo("Matt", "James", dob, address, "123-867-5309", "Friend");
    setInfoTest2.printInfo();
    
    
    
    // extPersonType getAddress test
    string extstreetAddress, extcity, extstate, extzip;
    
    extPersonType getAddressTest("Test", "Address", 1, 1, 2000, "Testing Address", "Test", "Address", "00000", "920-999-8888", "Family");
    getAddressTest.getAddress(extstreetAddress, extcity, extstate, extzip);
    
    cout << "Address Test: " << endl;
    cout << extstreetAddress << ", " << extcity << ", " << extstate << " " << extzip << "\n\n";
    
    
    
    // extPersonType getLastName test
    string lastName;
    
    extPersonType getLastNameTest("Jon", "Jones", 1, 27, 1990, "123 Test St.", "Boston", "MA", "02212", "920-123-4567", "Friend");
    getLastNameTest.getLastName(lastName);
    
    cout << "getLastNameTest:        " << lastName << "\n";
    
    
    
    // extPersonType getPhoneNumber test
    string phoneNumber;
    
    extPersonType getPhoneNumberTest("Test", "Phone", 1, 1, 2000, "Testing Phone", "Test", "Phone", "00000", "920-999-8888", "Family");
    getPhoneNumberTest.getPhoneNumber(phoneNumber);
    
    cout << "Phone Test:             " << phoneNumber << "\n";
    

    
    // extPersonType.getStatus test
    string status;
    
    extPersonType getStatusTest("Test", "Status", 2, 2, 2002, "Testing Status", "Test", "Status", "11111", "111-222-3333", "Family");
    getStatusTest.getStatus(status);
    
    cout << "Status Test:            " << status << "\n";
    
    
    
    // extPersonType getDOB test
    int month, day, year;
    
    extPersonType getDOBTest("Test", "DOB", 3, 3, 2003, "Testing DOB", "Test", "DOB", "22222", "222-333-4444", "Family");
    getDOBTest.getDOB(month, day, year);
    cout << "DOB Test:               " << month << "-" << day << "-" << year << "\n";
    
    
    
    // extPersonType isLastName test
    extPersonType isLastNameTest("Last Name", "Quinter", 12, 27, 1992, "123 Test St.", "Boston", "MA", "02212", "920-123-4567", "Friend");
    cout << "isLastName Test (pass): " << isLastNameTest.isLastName("Quinter") << "\n";
    cout << "isLastName Test (fail): " << isLastNameTest.isLastName("Jake") << "\n";
    
    
    
    // extPersonType isStatus test
    extPersonType isStatusTest("Test", "Status", 2, 2, 2002, "Testing Status", "Test", "Status", "11111", "111-222-3333", "Family");
    
    cout << "isStatus Test (pass):   " << isStatusTest.isStatus("Family") << "\n";
    cout << "isStatus Test (fail):   " << isStatusTest.isStatus("test") << "\n";
    
    
    
    // extPersonType isMonth test
    extPersonType isMonthTest("Month", "Test", 10, 10, 2010, "Testing Month", "Test", "DOB", "22222", "222-333-4444", "Family");
    cout << "Month Test (pass):      " << isMonthTest.isMonth(10) << "\n";
    cout << "Month Test (fail):      " << isMonthTest.isMonth(9) << "\n";
    cout << "**************************************\n\n";
    
}
