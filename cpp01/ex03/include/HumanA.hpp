#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include "Weapon.hpp"


// Colors
# define GREEN	"\033[92m"
# define RED	"\033[91m"
# define CYAN	"\033[96m"
# define YELLOW	"\033[93m"
# define BLUE	"\033[94m"
# define MAGENT	"\033[95m"
# define RESET	"\033[0m"

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack(void);
};


#endif