.PHONY: default
default: out test

.PHONY: out
out: main input.txt
	./main < input.txt

.PHONY: test
test: main
	./test.sh

main: main.cpp
	g++ -Wall -Wextra -Werror main.cpp -std=c++14 -DYUCHIKIDEBUG -o main