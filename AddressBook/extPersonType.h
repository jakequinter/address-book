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


class extPersonType : personType
{
public:
    extPersonType(string _firstName = "", string _lastName = "", int _month = 1,
                  int _day = 1, int _year = 1900, string _streetAddress = "",
                  string _city = "", string _state = "", string _zip = "",
                  string _phoneNumber = "", string _status = "");
    void setInfo(string _firstName, string _lastName, int _month, int _day, int _year, string _streetAddress, string _city, string _state, string _zip, string _phoneNumber, string _status);
    void setInfo(string _firstName, string _lastName, dateType _dob, addressType _address, string _phoneNumber, string _status);
    bool isLastName(string _lastName);
    void getLastName(string &_lastName);
    void getAddress(string &_streetAddress, string &_city, string &_state, string &_zip);
    void getPhoneNumber(string &_phoneNumber);
    void getStatus(string &_status);
    bool isStatus(string _status);
    void getDOB(int &_month, int &_day, int &_year);
    bool isMonth(int _month);
    void printInfo();
    
private:
    addressType address;
    dateType dob;
    string status;
    string phoneNumber;
};

#endif
