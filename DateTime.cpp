#include "DateTime.h"
#include <iomanip>

using namespace std;

// Default Constructor
DateTime::DateTime()
{
    day = 1;
    month = 1;
    year = 2026;
    hour = 0;
    minute = 0;
}

// Parameterized Constructor
DateTime::DateTime(int d, int m, int y, int h, int min)
{
    day = d;
    month = m;
    year = y;
    hour = h;
    minute = min;
}

// Set Date
void DateTime::setDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

// Set Time
void DateTime::setTime(int h, int min)
{
    hour = h;
    minute = min;
}

// Getters
int DateTime::getDay() const
{
    return day;
}

int DateTime::getMonth() const
{
    return month;
}

int DateTime::getYear() const
{
    return year;
}

int DateTime::getHour() const
{
    return hour;
}

int DateTime::getMinute() const
{
    return minute;
}

// Display Date
void DateTime::displayDate() const
{
    cout << setw(2) << setfill('0') << day << "/"
         << setw(2) << month << "/"
         << year;
}

// Display Time
void DateTime::displayTime() const
{
    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << minute;
}

// Display Date & Time
void DateTime::displayDateTime() const
{
    displayDate();
    cout << " ";
    displayTime();
}