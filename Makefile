CC       		= g++
CXXFLAGS 		= -std=c++20
RM       		= rm -f
FILES		 		= ./src/*.cpp
OUTPUT_FILE = ./dist/program

default: all

all: program

program: $(OUTPUT_FILE)
	$(CC) $(CXXFLAGS) -o $(OUTPUT_FILE) $(FILES)
