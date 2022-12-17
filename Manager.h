#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

class Manager: public Employee
{
    private:
        double bonus;
public:
        Manager();
        Manager(string firstName, string lastName, double salary, const string &email, const string &department);

        double getBonus() const;
        void setBonus(double newBonus);
        void setFirstName(string newFirstName);
        double getSalary() const;
        string getManagerDetails() const;
};

#endif // MANAGER_H
