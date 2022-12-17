#include <iostream>
#include <ctime>
#include <string>
#include "employee.h"
#include "manager.h"

using namespace std;

int main()
{

    Employee j = Employee("James", "Bond", 10000.00, "jb007@mi6.gov.uk", "MI6");
    Manager q = Manager("Lady", "Q", 20000.00, "q@mi6.gov.uk", "MI6");
    q.setBonus(15000.00);

    cout << j.getEmployeeDetails() << endl;
    cout << q.getManagerDetails() << endl;

    return 0;
}
