#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"
using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            int age = 0;
            string name;
            cout<<"Give students name: ";
            cin>>name;
            cout<<"Give students age: ";
            cin>>age;
            studentList.emplace_back(name, age);
            cout<<"Added student named: "<<name<<", age:"<<age<<endl;
            break;
        }
        case 1:
            for(auto & s : studentList)       // Tulosta StudentList vektorin kaikkien  nimet
            {
                s.printStudentInfo();
            }

            break;

        case 2:
            sort(studentList.rbegin(),studentList.rend(),[](Student & a, Student & b)
            {
                return a.getName()>b.getName();
            });

            for(auto & s : studentList)
            {
                s.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;

        case 3:
            sort(studentList.begin(),studentList.end(),[](Student & a, Student & b)
            {
                return a.getAge()>b.getAge();
            });
            for(auto & s : studentList)
            {
                s.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        case 4:
            {
            string name;
            cout<<"Give name of the student: ";
            cin>>name;
            vector<Student>::iterator it;
            it=find_if(studentList.begin(), studentList.end(),[name](Student & a)
            {
                return name == a.getName();
            });

            if(it==studentList.end())
            {
                cout<<"Not found"<<endl;
            }
            else
            {
                cout<<"Found ";
                it->printStudentInfo();
            }
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            }
            break;

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}
