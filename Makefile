CFLAGS = -Wall -Werror -MP -MMD -std=c99

all :
	make bin/deposit-calc

bin/deposit-calc : build/main.o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit-calc $(CFLAGS)

build/main.o : src/main.c src/deposit.h
	gcc -c src/main.c -o build/main.o $(CFLAGS)

build/deposit.o : src/deposit.c src/deposit.h
	gcc -c src/deposit.c -o build/deposit.o $(CFLAGS)

clean :
	@echo "Cleaning files in build directory"
	@echo "Cleaning binaries"
	@echo "All files have been cleaned."

-include build/*.d
