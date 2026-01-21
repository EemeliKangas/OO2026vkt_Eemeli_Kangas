#ifndef FAIJA_H
#define FAIJA_H
#include <string>
using namespace std;
class faija
{
public:
    faija(string);
    ~faija();
    void printFaijaNimi();
    virtual void printEducation();
private:
    string faijaNimi;
protected:
    string faijaNickName;
};

#endif // FAIJA_H
