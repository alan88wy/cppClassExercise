#include "employee.h"

Employee::Employee(string firstName, string lastName, double salary, const string &email, const string &department) :
    firstName(firstName),
    lastName(lastName)
    salary(salary),
    email(email),
    department(department)
{
    id = ++nextId;
    setStartDate();
}

string Employee::getEmployeeDetails() const {

    string employee = "Employee {id = " + to_string(id)
            + ", name = '" + getName() + "'" +
            ", salary = " + to_string(salary) +
            ", department='" + department + "'" +
            ", startdate = " + startDate +
            "}";
    return employee;
}

bool Employee::operator==(const Employee& rhs) {

    if (*this == rhs) return true;
    if (id == rhs.id &&
        getName() == rhs.getName() &&
        salary == rhs.salary &&
        department == rhs.department &&
        startDate == rhs.startDate) {
        return true;
    } else {
        return false;
    }

}

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
