//
//  extPersonType.h
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#ifndef extPersonType_h
#define extPersonType_h

#include "personType.h"
#include "addressType.h"
#include "dateType.h"

#include <string>


class extPersonType
{
public:
    extPersonType(string firstName = "", string lastName = "", int month = 1,
                  int day = 1, int year = 1900, string street = "",
                  string city = "", string state = "", string zip = "",
                  string phone = "", string status = "");
    void printInfo();
    void setInfo(string firstName, string lastName, int month, int day, int year, string street, string city, string state, string zip, string phone, string status);
    void setInfo(string firstName, string lastName, dateType dob, addressType address, string phone, string status);
    bool isLastName(string lastName);
    void getLastName(string &_lastName);
    void getAddress(string &_address, string &_city, string &_state, string &_zip);
    void getStatus(string &_status);
    void getPhoneNumber(string &_phone);
    bool isStatus(string status);
    void getDOB(int &_month, int &_day, int &_year);
    bool isMonth(int month);
    
private:
    addressType address;
    dateType dob;
    string status;
    string phoneNumber;
    
    
};

#endif
