// CS124-03
// FILE: amEmployee.h
// PROVIDES: An employee template for lab 10
//
// FUNCTIONS in this toolkit: 
//   Employee() normal constructor 
//   Employee(int id, string name) another constructor
//   int getID() returns the employee's id
//   string getName returns the employee's name
//   friend ostream& operator<<(ostream& os, const Employee& employee);
//     overloaded opperator for when to print the Employee
//   bool operator >(const Employee& employee)
//     overloaded operator for when comparing one Employee's id to another
//   bool operator <(const Employee& employee)
//     different comparison operator but same purpose as operator >

#include<iostream>
#include<string>
using namespace std;
#ifndef EMPLOYEE_H
#define EMPLOYEE_H 

class Employee
{
private:
    int id;
    string name;
public:    
    Employee();
    Employee(int id, string name);
    int getID();
    string getName();
    friend ostream& operator<<(ostream& os, const Employee& employee)
    {
        os <<"ID Number: "<< employee.id << " Name: " << employee.name;
        return os;
    }
    bool operator <(const Employee& employee)
    {
        if(id < employee.id)
        {
            return true;
        }
        return false;
    }
    bool operator >(const Employee& employee)
    {
        if(id > employee.id)
        {
            return true;
        }
        return false;
    }
};

Employee::Employee()
{
    id = 0; name = "";
}

Employee::Employee(int id, string name)
{
    this->id = id, this->name = name;
}

int Employee::getID()
{
    return id;
}

string Employee::getName()
{
    return name;
}

#endif

