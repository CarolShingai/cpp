#compiler
NAME = megaphone
CXX = c++
CXXFlags = -Wall -Wextra -Werror -std=c++98

# directories
SRC_DIR =./ex01
OBJ_DIR =./obj
BIN_DIR = bin

# archives
SRC =  $(SRC_DIR)/index.cpp
OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFlags) $(OBJ) -o $(NAME)
	echo "Meus objetos $(OBJ)"
	echo "$(NAME) it's done!"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFlags) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "removing objects"

fclean: clean
	@rm -rf $(NAME)
	@echo "removing executables"

re: fclean all

.PHONY: all clear fclean re
