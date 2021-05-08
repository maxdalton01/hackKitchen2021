// Hack Kitchen 2021

// include statements
#include <iostream>
#include <string>

using namespace std; 

// .................
// _________________
// |||||||||||||||||

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

// .................
// _________________
// |||||||||||||||||

bool isIdiotSandwich (string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    if (str == "an idiot sandwich" || str == "idiot sandwich")
        return true;
    return false;
}

// .................
// _________________
// |||||||||||||||||


int main()
{
    
    // function for determining raw or not
    // need to have it boiled for exactly 8 hours: gordon is tough!

    double userTime_s__p__hot_;
    string userName_s__p__hot_;
    cout << "Welcome chef! What would you like to be called? " << endl;
    getline(cin, userName_s__p__hot_);
    userName_s__p__hot_ = "Chef " + userName_s__p__hot_;
    cout << "Nice to meet you " + userName_s__p__hot_ + "." << endl;
    cout << "Today we will be cooking up an Irish specialty: Corned-Beef Hash." << endl;
    cout << "The meat has been marinating for several days, you just need to stew it." << endl;
    cout << "To do this, we will be using a slow-cooker." << endl;
    cout << "How long should we stew the beef in this slow-cooker for, chef?" << endl;
    cin >> userTime_s__p__hot_;
    
    cin.ignore(10000, '\n');
    
    int raw_s__p__hot_ = isRaw(userTime_s__p__hot_);
    string idiotSandwich_s__p__hot_;
    switch(raw_s__p__hot_) {
        case 0:
            cout << "It's RAW! Get out!" << endl;
            return 1;
            break;
        case 1:
            cout << "Very well done. On to the next task." << endl;
            break;
        case 2:
            cout << "What are you?" << endl;
            getline(cin, idiotSandwich_s__p__hot_);
            if(isIdiotSandwich(idiotSandwich_s__p__hot_)) {
                cout << "Yes you are! Get out!" << endl;
                return 1;
            }
            cout << "No! You're an IDIOT SANDWICH! Now get out!" << endl;
            return 1;
        case 3:
            cout << "It's BURNT! Get out!" << endl;
            return 1;
    }
    
    cout << "You made it this far, you get a GOLD STAR" << endl;
    
}
