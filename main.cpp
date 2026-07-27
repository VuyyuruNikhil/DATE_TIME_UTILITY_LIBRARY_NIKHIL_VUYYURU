#include <iostream>
#include <string>
#include <ctime>
#include "Event.h"

using namespace std;

int main()
{
    Event events[100];
    int totalEvents = 0;
    int choice;

    do
    {
        cout << "\n=====================================================\n";
        cout << "        DATE & TIME EVENT SCHEDULER\n";
        cout << "=====================================================\n";
        cout << "      C++ Mini Project | CipherSchools\n";
        cout << "=====================================================\n";

        cout << "\n-------------------- MAIN MENU ----------------------\n";
        cout << "1. Add New Event\n";
        cout << "2. View All Events\n";
        cout << "3. Search Event by Title\n";
        cout << "4. Delete Event\n";
        cout << "5. Display Current Date & Time\n";
        cout << "6. Exit\n";
        cout << "-----------------------------------------------------\n";

        cout << "Enter your choice : ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
        case 1:
        {
            string title, location;
            int day, month, year, hour, minute;

            cout << "\n========== ADD NEW EVENT ==========\n";

            cout << "Enter Event Title : ";
            getline(cin, title);

            cout << "Enter Location : ";
            getline(cin, location);

            cout << "Enter Day : ";
            cin >> day;

            cout << "Enter Month : ";
            cin >> month;

            cout << "Enter Year : ";
            cin >> year;

            cout << "Enter Hour (24 Hour Format) : ";
            cin >> hour;

            cout << "Enter Minute : ";
            cin >> minute;

            cin.ignore();

            DateTime dt(day, month, year, hour, minute);

            events[totalEvents] = Event(title, location, dt);
            totalEvents++;

            cout << "\n✓ Event Added Successfully!\n";

            break;
        }

        case 2:
        {
            cout << "\n============= ALL EVENTS =============\n";

            if(totalEvents==0)
            {
                cout<<"No Events Available.\n";
            }
            else
            {
                for(int i=0;i<totalEvents;i++)
                {
                    cout<<"\nEvent "<<i+1<<endl;
                    events[i].displayEvent();
                }
            }

            break;
        }
                case 3:
        {
            if(totalEvents==0)
            {
                cout<<"\nNo Events Available.\n";
                break;
            }

            string searchTitle;
            bool found=false;

            cout<<"\nEnter Event Title to Search : ";
            getline(cin,searchTitle);

            for(int i=0;i<totalEvents;i++)
            {
                if(events[i].getTitle()==searchTitle)
                {
                    cout<<"\n========== EVENT FOUND ==========\n";
                    events[i].displayEvent();
                    found=true;
                }
            }

            if(!found)
            {
                cout<<"\nEvent Not Found.\n";
            }

            break;
        }

        case 4:
        {
            if(totalEvents==0)
            {
                cout<<"\nNo Events Available.\n";
                break;
            }

            int eventNo;

            cout<<"\nEnter Event Number to Delete : ";
            cin>>eventNo;

            if(eventNo<1 || eventNo>totalEvents)
            {
                cout<<"\nInvalid Event Number.\n";
            }
            else
            {
                for(int i=eventNo-1;i<totalEvents-1;i++)
                {
                    events[i]=events[i+1];
                }

                totalEvents--;

                cout<<"\n✓ Event Deleted Successfully.\n";
            }

            break;
        }

        case 5:
        {
            time_t now=time(0);
            tm *ltm=localtime(&now);

            cout<<"\n========== CURRENT DATE & TIME ==========\n";

            cout<<"Date : "
                <<ltm->tm_mday<<"/"
                <<1+ltm->tm_mon<<"/"
                <<1900+ltm->tm_year<<endl;

            cout<<"Time : "
                <<ltm->tm_hour<<":";

            if(ltm->tm_min<10)
                cout<<"0";

            cout<<ltm->tm_min<<endl;

            break;
        }
                case 6:
        {
            cout << "\n=========================================\n";
            cout << " Thank You for Using Event Scheduler\n";
            cout << " Exiting Application...\n";
            cout << "=========================================\n";
            break;
        }

        default:
        {
            cout << "\nInvalid Choice! Please Enter a Number Between 1 and 6.\n";
        }

        } // End of switch

    } while(choice != 6);

    return 0;
}