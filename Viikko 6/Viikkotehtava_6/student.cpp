#include "student.h"
#include <iostream>
Student::Student(string s, int a)
{
    age=a;
    name=s;
}

void Student::setAge(int a)
{
    age = a;
}

void Student::setName(string s)
{
    name = s;
}

string Student::getName()
{
    return name;
}

int Student::getAge()
{
    return age;
}

void Student::printStudentInfo()
{
    cout<<"Student info: Name: "<<name<<" Age: "<<age<<endl;
}
