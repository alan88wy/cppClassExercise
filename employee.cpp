#include "employee.h"
#include <ctime>
#include <string>
#include <sstream>
#include <iomanip>
#include <format>  // Only available in C++ 20

static int nextId = 0;

double Employee::getSalary() const
{
    return salary;
}

void Employee::setSalary(double newSalary)
{
    salary = newSalary;
}

int Employee::getId() const
{
    return id;
}

void Employee::setId()
{
    id = ++nextId;
}

string Employee::getEmail() const
{
    return email;
}

void Employee::setEmail(const string &newEmail)
{
    email = newEmail;
}

string Employee::getDepartment() const
{
    return department;
}

void Employee::setDepartment(const string &newDepartment)
{
    department = newDepartment;
}

Employee::Employee(string firstName, string lastName, double salary, const string &email, const string &department) :
    salary(salary),
    email(email),
    department(department)
{
    setId();
    setStartDate();
    setFirstName(firstName);
    setLastName(lastName);
}

string Employee::getDetails() {

//    std::stringstream ss;
//    ss << std::fixed << std::setprecision(2) << salary;
//    std::string dSalary = ss.str();

    // we use format instead

    string dSalary = std::format("{:.2f}", salary);

    string employee = "Employee {id = " + to_string(id)
            + ", name = '" + getName() + "'" +
            ", salary = " + dSalary +
            ", department='" + department + "'" +
            ", startdate = " + startDate +
            "}";
    return employee;
}

//bool Employee::operator==(const Employee& rhs) {

//    if (*this == rhs) return true;
//    if (id == rhs.id &&
//        getName() == rhs.getName() &&
//        salary == rhs.salary &&
//        department == rhs.department &&
//        startDate == rhs.startDate) {
//        return true;
//    } else {
//        return false;
//    }

//}

string Employee::getStartDate() const
{
    return startDate;
}

void Employee::setStartDate()
{
    time_t now = time(0);

//    cout << now << endl;

//    tm *ltm = localtime(&now);

//    string year = to_string(1900 + ltm->tm_year);
//    string month = to_string(1 + ltm->tm_mon);
//    string day = to_string(ltm->tm_mday);
//    string hour = to_string(ltm->tm_hour);
//    string minute = to_string(ltm->tm_min);
//    string seconds = to_string(ltm->tm_sec);
//    string ldate = day + "/" + month + "/" + year;
//    string ltime = hour + ":" + minute + ":" + seconds;
//    cout << ldate << " " << ltime << endl;


    string dt = ctime(&now);
//    cout << dt << endl;

    startDate = dt;


}
