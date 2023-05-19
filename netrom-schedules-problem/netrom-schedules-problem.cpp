#include <iostream>
using namespace std;

void DisplaySchedules(int startDay, int noOfWorkingDays, int noOfDaysOff, int noOfOccurences) {
    
    for (int i = 1; i <= noOfOccurences; i++) {

        if (startDay <= 30) {
            cout << "(" << startDay << "-";

            if (startDay + noOfWorkingDays - 1 <= 30)
                cout << startDay + noOfWorkingDays - 1 << ")" << " ";
            else
                cout << noOfWorkingDays - abs(30 - startDay) - 1 << ")" << " ";

            startDay = startDay + noOfWorkingDays + noOfDaysOff;
        }
        else {
            startDay = abs(30 - startDay + 1) + 1;

            cout << "(" << startDay << "-";

            if (startDay + noOfWorkingDays - 1 <= 30)
                cout << startDay + noOfWorkingDays - 1 << ")" << " ";
            else 
                cout << noOfWorkingDays - abs(30 - startDay) - 1 << ")" << " ";
         
            startDay = startDay + noOfWorkingDays + noOfDaysOff;
        }
    }
}

int main()
{
    int startDay, noOfWorkingDays, noOfDaysOff, noOfOccurences;

    cout << "Enter the start day:";
    cin >> startDay;

    cout << "Enter the number of working days:";
    cin >> noOfWorkingDays;

    cout << "Enter the number of off days:";
    cin >> noOfDaysOff;

    cout << "Enter the number of occurences:";
    cin >> noOfOccurences;

    DisplaySchedules(startDay, noOfWorkingDays, noOfDaysOff, noOfOccurences);

    return 0;
}