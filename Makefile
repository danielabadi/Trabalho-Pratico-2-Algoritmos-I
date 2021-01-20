CC=g++
CFLAGS=-Wall -Wextra -g -std=c++11
EXEC=./tp2

${EXEC}: src/main.cpp
	${CC} ${CFLAGS} src/main.cpp -o ${EXEC}

test: ${EXEC}
	@bash run_tests.sh ${EXEC}
