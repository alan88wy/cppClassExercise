#include <sstream>
#include <iomanip>
#include <format>  // Only available in C++ 20
#include "manager.h"


Manager::Manager(string firstName, string lastName, double salary, const string &email, const string &department) :
    Employee(firstName, lastName, salary, email, department)
{
    bonus = 0.00;
}

double Manager::getBonus() const
{
    return bonus;
}

void Manager::setBonus(double newBonus)
{
    bonus = newBonus;
}

double Manager::getSalary() const
{
    return Employee::getSalary() + getBonus();
}

string Manager::getDetails() {

    //    std::stringstream ss;
    //    ss << std::fixed << std::setprecision(2) << salary;
    //    std::string dSalary = ss.str();

        // we use format instead

    string dSalary = std::format("{:.2f}", getSalary());
    string dBonus = std::format("{:.2f}", getBonus());

    string manager = "Employee {id = " + to_string(getId())
            + ", name = '" + getName() + "'" +
            ", salary = " + dSalary +
            ", bonus = " + dBonus +
            ", department='" + getDepartment() + "'" +
            ", startdate = " + getStartDate() +
            "}";
    return manager;
}

