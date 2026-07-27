#include "Event.h"

using namespace std;

// Default Constructor
Event::Event()
{
    title = "";
    location = "";
}

// Parameterized Constructor
Event::Event(string t, string l, DateTime dt)
{
    title = t;
    location = l;
    dateTime = dt;
}

// Setters
void Event::setTitle(string t)
{
    title = t;
}

void Event::setLocation(string l)
{
    location = l;
}

void Event::setDateTime(DateTime dt)
{
    dateTime = dt;
}

// Getters
string Event::getTitle() const
{
    return title;
}

string Event::getLocation() const
{
    return location;
}

DateTime Event::getDateTime() const
{
    return dateTime;
}

// Display Event
void Event::displayEvent() const
{
    cout << "----------------------------------------" << endl;
    cout << "Event Title : " << title << endl;
    cout << "Location    : " << location << endl;
    cout << "Date & Time : ";
    dateTime.displayDateTime();
    cout << endl;
    cout << "----------------------------------------" << endl;
}