#include "lcd.h"
#include <iostream>
void LCD::begin
{
    cout << "LCD begin"<<endl;
    text = "LCD alustettu";
}

void LCD::print(string)
    cout<<s<<endl;

}

string LCD::floatToString(float luku)
{
    string s = to_string(luku);
    return s;
}

