#ifndef TIME2_H
#define TIME2_H

#include <iostream>
using namespace std;

class Time2
{
    public:
        //Time2(int h, int m, int s)
        Time2(int = 0, int = 0, int = 0, string = "None");          //default values
        ~Time2();
        int getHour() const;
        int getMin() const;
        int getSec() const;
        bool am();
        string getName() const;
        Time2& operator ++();
        Times2 operator ++(int);
        Time2& printTime();
        Time2& operator --();
        Time2& setHour(int);
        Time2& setMin(int);
        Time2& setSec(int);
        Time2& setAll(int, int, int);


    protected:

    private:
        int hour;
		    int min; 
		    int sec;
        //void setHour(int);
        //void setMinute(int);
        //void setSecond(int);
        const string name; // const object for the class

};

#endif // TIME2_H
