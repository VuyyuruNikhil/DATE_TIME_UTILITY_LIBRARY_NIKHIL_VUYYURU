#ifndef DATETIME_H
#define DATETIME_H

#include <iostream>
using namespace std;

class DateTime
{
private:
    int day;
    int month;
    int year;
    int hour;
    int minute;

public:
    // Constructors
    DateTime();
    DateTime(int d, int m, int y, int h, int min);

    // Setters
    void setDate(int d, int m, int y);
    void setTime(int h, int min);

    // Getters
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    int getHour() const;
    int getMinute() const;

    // Display
    void displayDate() const;
    void displayTime() const;
    void displayDateTime() const;
};

#endif