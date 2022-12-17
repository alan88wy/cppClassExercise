#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "Person.h"
#include <ctime>

using namespace std;

static int nextId = 0;

class Employee: public Person {
    private:
        int id;
        double salary;
        string email;
        string department;
        string startDate;

    public:
        Employee(string firstName, string lastName, double salary, const string &email, const string &deparstmente);
        string getStartDate() const;
        void setStartDate();
        string getEmployeeDetails() const;
        bool operator==(const Employee& rhs);
};



#endif // EMPLOYEE_H




