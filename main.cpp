// Hack Kitechn 2021

// include statements
#include <iostream>
#include <string>

using namespace std; 

int isRaw(int time) {
    if (time < 8 && time > 0)
        return 0; // raw!
    else if (time > 8)
        return 3; // overcooked!
    else if (time < 0)
        return 2; // negative time?? what?
    else
        return 1; // kudos to you, time was right
}

bool isIdiotSandwich (string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    if (str == "an idiot sandwich" || str == "idiot sandwich")
        return true;
    return false;
}

int main()
{
    
    // function for determining raw or not
    // need to have it boiled for exactly 8 hours: gordon is tough!

    double userTime;
    string userName;
    cout << "Welcome chef! What would you like to be called? " << endl;
    getline(cin, userName);
    userName = "Chef " + userName;
    cout << "Nice to meet you " + userName + "." << endl;
    cout << "Today we will be cooking up an Irish specialty: Corned-Beef Hash." << endl;
    cout << "The beef has been marinating for several days, you just need to stew it." << endl;
    cout << "To do this, we will be using a slow-cooker." << endl;
    cout << "How long should we stew the beef in this slow-cooker for, chef?" << endl;
    cin >> userTime;
    
    cin.ignore(10000, '\n');
    
    int raw = isRaw(userTime);
    string idiotSandwich;
    switch(raw) {
        case 0:
            cout << "It's RAW! Get out!" << endl;
            return 1;
            break;
        case 1:
            cout << "Very well done. On to the next task." << endl;
            break;
        case 2:
            cout << "What are you?" << endl;
            getline(cin, idiotSandwich);
            if(isIdiotSandwich(idiotSandwich)) {
                cout << "Yes you are! Get out!" << endl;
                return 1;
            }
            cout << "No! You're an IDIOT SANDWICH! Now get out!" << endl;
            return 1;
        case 3:
            cout << "It's BURNT! Get out!" << endl;
            return 1;
    }
    
}
