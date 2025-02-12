GPP = g++
PP_FLAGS = -Wall -Werror -Wextra -Wpedantic -std=c++17

FOLDER = tasks/
FILE:=$(shell ls -t $(FOLDER) | head -n 1 | grep -E 'task(_[0-9]{2}){3}\.cpp')

all: clang build run

clang:
	clang-format -i $(FOLDER)*.cpp

build:
	$(GPP) $(PP_FLAGS) $(FOLDER)$(FILE)

run:
	./a.out