#ifndef LCD_H
#define LCD_H
using namespace ;
class LCD
{
public:
    void begin;
    void print(string);
    string floatToString(float);
private:
    string text;
};

#endif // LCD_H
