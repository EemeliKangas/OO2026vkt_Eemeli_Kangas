#ifndef SON_H
#define SON_H
#include "faija.h"
#include <string>
using namespace std;
class son : public faija
{
public:
    son(string, string);
    ~son();
    virtual void printEducation() override;

private:
    string sonName;
};

#endif // SON_H
