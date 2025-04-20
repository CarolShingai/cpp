#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

// Colors
# define GREEN	"\033[92m"
# define RED	"\033[91m"
# define YELLOW	"\033[93m"
# define BLUE	"\033[94m"
# define PURPLE	"\033[95m"
# define RESET	"\033[0m"

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif