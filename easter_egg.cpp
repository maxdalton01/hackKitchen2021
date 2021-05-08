#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include "easter_egg.h"

using namespace std;

Demon_Ramsey::Demon_Ramsey()
{
    int x = generate_randnum();
    magic_number_s__p__hot_ = x;
}

// ...........
// ___________
// |||||||||||

Demon_Ramsey::~Demon_Ramsey(){}

// ...........
// ___________
// |||||||||||

int Demon_Ramsey::generate_randnum()
{
    /* initialize random seed: */
    srand (time(NULL));
    
    /* generate secret number between 1 and 10: */
    magic_number_s__p__hot_ = rand() % 10 + 1;

    return magic_number_s__p__hot_;
}

// ...........
// ___________
// |||||||||||

bool Demon_Ramsey::check_input(int user_num)
{
    if(user_num < 1 || user_num > 10)
    {
        cout << "You silly bag of potatoes! I asked for a number between 1 and 10!" << endl;
        return false;
    }
	if(user_num == magic_number_s__p__hot_) return true;
    else
    {
        return false;
    }
}

// ...........
// ___________
// |||||||||||

int Demon_Ramsey::get_magic_number()
{
    return magic_number_s__p__hot_;
}
