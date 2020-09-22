//
//  info.cpp
//  AddressBook
//
//  Created by Jake Quinter on 9/22/20.
//

#include <iostream>
#include <string>
#include "info.h"

using namespace std;

void info::identify()
{
  cout << "**************************************\n";
  cout << "Course:         " << course << "\n";
  cout << "Instructor:     " << instructor << "\n";
  cout << "Developer:      " << developer << "\n";
  cout << "**************************************\n\n";
}

void info::identify(string assignmentName)
{
  cout << "**************************************\n";
  cout << "Course:         " << course << "\n";
  cout << "Instructor:     " << instructor << "\n";
  cout << "Developer:      " << developer << "\n";
  cout << "Developer:      " << assignmentName << "\n";
  cout << "**************************************\n\n";
}

info::~info()
{
    
}

info::info()
{
    course = "CPS362 Data Structures";
    instructor = "Judith Ligocki";
    developer = "Jake Quinter";
}
