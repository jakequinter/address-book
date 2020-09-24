//
//  extPersonType.cpp
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#include <iostream>

#include "extPersonType.h"

using namespace std;

extPersonType::extPersonType(string _firstName, string _lastName, int _month, int _day, int _year, string _streetAddress,
                             string _city, string _state, string _zip, string _phoneNumber, string _status)
{
    setName(_firstName, _lastName);
    address.setAddress(_streetAddress, _city, _state, _zip);
    dob.setDate(_month, _day, _year);
    status = _status;
    phoneNumber = _phoneNumber;
}

void extPersonType::setInfo(string _firstName, string _lastName, int _month, int _day, int _year, string _streetAddress,
                            string _city, string _state, string _zip, string _phoneNumber, string _status)
{
    setName(_firstName, _lastName);
    address.setAddress(_streetAddress, _city, _state, _zip);
    dob.setDate(_month, _day, _year);
    status = _status;
    phoneNumber = _phoneNumber;
}

void extPersonType::setInfo(string _firstName, string _lastName, dateType _dob, addressType _address, string _phoneNumber, string _status)
{
    setName(_firstName, _lastName);
    dob = _dob;
    address = _address;
    phoneNumber = _phoneNumber;
    status = _status;
}

bool extPersonType::isLastName(string _lastName)
{
    if (lastName == _lastName)
        return true;
    else
        return false;
}

void extPersonType::getLastName(string &_lastName)
{
    _lastName = lastName;
}

void extPersonType::getAddress(string &_streetAddress, string &_city, string &_state, string &_zip)
{
    address.getAddress(_streetAddress, _city, _state, _zip);
}

void extPersonType::getPhoneNumber(string &_phoneNumber)
{
    _phoneNumber = phoneNumber;
}

void extPersonType::getStatus(string &_status)
{
    _status = status;
}

bool extPersonType::isStatus(string _status)
{
    if (status == _status)
        return true;
    
    return false;
}

void extPersonType::getDOB(int &_month, int &_day, int &_year)
{
    dob.getDate(_month, _day, _year);
}

bool extPersonType::isMonth(int _month)
{
    int dMonth = dob.getMonth();
    if (_month == dMonth)
        return true;
    else
        return false;
}

void extPersonType::printInfo()
{
    cout << "Name:    " << firstName << " " << lastName << "\n";
    cout << "Address: ";
    address.print();
    cout << "DOB:     ";
    dob.printDate();
    cout << "\nPhone:   " << phoneNumber << "\n";
    cout << "Status:  " << status << "\n\n";
}
