#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
    private:
        std::string firstName;
        std::string lastName;
    public:
        Person() {};
        Person(string firstName, string lastName) {
            this->firstName = firstName;
            this->lastName = lastName;
        }

        std::string getFirstName() const;
        void setFirstName(const std::string &newFirstName);
        std::string getName() const;
        std::string getLastName() const;
        void setLastName(const std::string &newLastName);
};

inline string Person::getLastName() const
{
    return lastName;
}

inline void Person::setLastName(const string &newLastName)
{
    lastName = newLastName;
}

inline string Person::getFirstName() const
{
    return firstName;
}

inline void Person::setFirstName(const string &newFirstName)
{
    firstName = newFirstName;
}

inline string Person::getName() const
{
    return firstName + " " + lastName;
}

#endif // PERSON_H
