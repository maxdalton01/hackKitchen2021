// easter_egg.h

#ifndef EasterEgg_h
#define EasterEgg_h

class Demon_Ramsey
{
public:
    // Constructor and Destructor 
    Demon_Ramsey();
    virtual ~Demon_Ramsey();

    bool check_input(int user_num);
    int get_magic_number();

private:
    int generate_randnum(); 
    int magic_number_s__p__hot_;
};

#endif // EasterEgg_h