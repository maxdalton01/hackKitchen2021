// Hack Kitechn 2021

// include statements
#include <iostream>
#include <string>

using namespace std; 

int isRaw(int time) {
    if (time != 8)
        return 0; // needs to be perfect
    else if (time < 0)
        return 2; // negative time?? what?
    else
        return 1; // kudos to you, time was right
}

int main()
{
    
    // function for determining raw or not
    // need to have it boiled for exactly 8 hours: gordon is tough!

    double userTime;
    string userName;
    cout << "Welcome chef! What would you like to be called?";
    getline(cin, userName);
    userName = "Chef " + userName;
    
    /*
    string model;
	string type_of_vehicle;
	string color;
	int wheels;
	string leather;
	string auto_pilot;

	double sum = 0;

	cout << "Which vehicle would you like to order? "; //the following lines essentially prompt for user input and take in input
	getline(cin, model);
	cout << "Which kind would you like? ";
	getline(cin, type_of_vehicle);
	cout << "What exterior color would you like? ";
	getline(cin, color);
	cout <<  "Which wheels would you like? ";
	cin >> wheels;
	cin.ignore(10000, '\n');
	cout << "Want leather interior? ";
	getline(cin, leather);
	cout << "Want Auto-Pilot? ";
	getline(cin, auto_pilot);
     */
}
