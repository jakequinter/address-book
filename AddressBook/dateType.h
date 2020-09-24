//
//  dateType.h
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#ifndef dateType_h
#define dateType_h

class dateType
{
public:
    void setDate(int month, int day, int year);
    void getDate(int &month, int &day, int &year);
    void printDate() const;
    int getMonth();
    dateType(int month = 1, int day = 1, int year = 1900);


protected:
    bool isLeapYear(int y);
    int dMonth;
    int dDay;
    int dYear;
};

#endif
