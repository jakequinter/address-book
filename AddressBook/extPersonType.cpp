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
    // @TODO: need to set firstName & lastName
    address.setAddress(_streetAddress, _city, _state, _zip);
    dob.setDate(_month, _day, _year);
    status = _status;
    phoneNumber = _phoneNumber;
}

void extPersonType::setInfo(string _firstName, string _lastName, int _month, int _day, int _year, string _streetAddress,
                            string _city, string _state, string _zip, string _phoneNumber, string _status)
{
    // @TODO: need to set firstName & lastName
    address.setAddress(_streetAddress, _city, _state, _zip);
    dob.setDate(_month, _day, _year);
    status = _status;
    phoneNumber = _phoneNumber;
}

void extPersonType::setInfo(string _firstName, string _lastName, dateType _dob, addressType _streetAddress, string _phoneNumber, string _status)
{
    // @TODO: need to set firstName & lastName
    // @TODO: need to set DOB
    // @TODO: need to set address
    phoneNumber = _phoneNumber;
    status = _status;
}

//bool extPersonType::isLastName(string _lastName)
//{
//
//}

//void extPersonType::getLastName(string &_lastName)
//{
//
//}

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

//bool extPersonType::isMonth(int month)
//{
//
//}

void extPersonType::printInfo()
{
    cout << "Address: ";
    address.print();
    cout << "DOB: ";
    dob.printDate();
    cout << "\nStatus: " << status << "\n";
    cout << "Phone Number: " << phoneNumber << "\n\n";
}
