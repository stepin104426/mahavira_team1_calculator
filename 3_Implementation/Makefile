<<<<<<< HEAD
# Name of the project
PROJECT_NAME = MAHAVIRA_TEAM1_CALCULATOR

# Output directory
BUILD = build

# All source code files
SRC = main.c src/basic_calculation.c src/advanced_calculation.c src/addition.c src/subtraction.c\
=======

SRC =  src/basic_calculation.c src/advanced_calculation.c src/addition.c src/calculate_power.c main.c


SRC =  src/basic_calculation.c src/advanced_calculation.c src/addition.c main.c

SRC =  src/basic_calculation.c src/advanced_calculation.c src/addition.c src/factorial.c src/square.c main.c
>>>>>>> 238f650b869f78c635e87814c0fddbc1a6f057ef


INC = -Iinc\

# Project Output name
#PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC)-o $(BUILD)/Hello.out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(BUILD)/Hello.out

# Document the code using Doxygen
doc:
	make -C ./documentation


# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build