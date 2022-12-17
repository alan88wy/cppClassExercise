#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "person.h"

using namespace std;

class Employee: public Person {
    private:
        int id;
        double salary;
        string email;
        string department;
        string startDate;

    public:
        Employee(string firstName, string lastName, double salary, const string &email, const string &department);
        string getStartDate() const;
        void setStartDate();
        string getEmployeeDetails() const;
        bool operator==(const Employee& rhs);
        double getSalary() const;
        void setSalary(double newSalary);
        int getId() const;
        void setId();
        string getEmail() const;
        void setEmail(const string &newEmail);
        string getDepartment() const;
        void setDepartment(const string &newDepartment);
};



#endif // EMPLOYEE_H




