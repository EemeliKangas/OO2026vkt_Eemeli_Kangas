#include "student.h"


student::student(string s, int n)
{
    name = s;
    studentNumber = n;
}

string student::getName()
{
    return name;
}

int student::getNumber()
{
    return studentNumber;
}
