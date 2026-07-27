#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <string>
#include "DateTime.h"

using namespace std;

class Event
{
private:
    string title;
    string location;
    DateTime dateTime;

public:
    // Constructors
    Event();
    Event(string t, string l, DateTime dt);

    // Setters
    void setTitle(string t);
    void setLocation(string l);
    void setDateTime(DateTime dt);

    // Getters
    string getTitle() const;
    string getLocation() const;
    DateTime getDateTime() const;

    // Display Event
    void displayEvent() const;
};

#endif