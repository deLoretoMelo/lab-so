# Compile
clang = clang

# Compile options 
CFLAGS = -Wall -std=c11

# Compile main.c
main:
	${clang} ${CFLAGS} -o main main.c

# Compile helloworld.c
helloWorld:
	${clang} ${CFLAGS} -o helloWorld helloWorld.c

# Run main
run:
	./main

# Clean executables 
clean:
	rm -f helloWorld main