    //www.onlinegdb.com/
    
#include <iostream>
#include <string>
using namespace std;

class WeatherConditions {
private:
    string conditions[7];

public:
    void setCondition(int day, const string& condition) {
        if (day >= 0 && day < 7) {
            conditions[day] = condition;
        } else {
            cout << "Invalid day!" << endl;
        }
    }

    string getCondition(int day) const {
        if (day >= 0 && day < 7) {
            return conditions[day];
        } else {
            return "Invalid day!";
        }
    }
};

int main() {
    WeatherConditions weather;

    // Request user's name and college name
    string name;
    string college;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your college name: ";
    getline(cin, college);

    // Prompt the user to enter the weather conditions for each day
    for (int i = 0; i < 7; i++) {
        string dayOfWeek;

        switch (i) {
            case 0:
                dayOfWeek = "Monday";
                break;
            case 1:
                dayOfWeek = "Tuesday";
                break;
            case 2:
                dayOfWeek = "Wednesday";
                break;
            case 3:
                dayOfWeek = "Thursday";
                break;
            case 4:
                dayOfWeek = "Friday";
                break;
            case 5:
                dayOfWeek = "Saturday";
                break;
            case 6:
                dayOfWeek = "Sunday";
                break;
        }

        cout << "Enter the weather condition for " << dayOfWeek << ": ";
        string condition;
        getline(cin, condition);

        weather.setCondition(i, condition);
    }

    // Display the weather conditions entered by the user
    cout << "\nWeather conditions for the week:\n";
    for (int i = 0; i < 7; i++) {
        string dayOfWeek;

        switch (i) {
            case 0:
                dayOfWeek = "Monday";
                break;
            case 1:
                dayOfWeek = "Tuesday";
                break;
            case 2:
                dayOfWeek = "Wednesday";
                break;
            case 3:
                dayOfWeek = "Thursday";
                break;
            case 4:
                dayOfWeek = "Friday";
                break;
            case 5:
                dayOfWeek = "Saturday";
                break;
            case 6:
                dayOfWeek = "Sunday";
                break;
        }

        cout << dayOfWeek << ": " << weather.getCondition(i) << endl;
    }

    // Display user's name and college name
    cout << "\nName: " << name << endl;
    cout << "College: " << college << endl;

    return 0;
}
