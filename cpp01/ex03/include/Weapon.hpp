#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>
# include <cstdlib>

// Colors
# define GREEN	"\033[92m"
# define RED	"\033[91m"
# define YELLOW	"\033[93m"
# define BLUE	"\033[94m"
# define PURPLE	"\033[95m"
# define RESET	"\033[0m"

class Weapon
{
    private:
        std::string _type;
    public:
        ~Weapon();
        Weapon(std::string type);
        std::string getType(void);
        void setType(std::string type);

};

#endif