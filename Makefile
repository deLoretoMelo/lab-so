# Compile
clang = clang

# Compile options 
CFLAGS = -Wall -std=c11

# Compile main.c
main:
	${clang} ${CFLAGS} -o main main.c

# Compile helloworld.c
hello_world:
	${clang} ${CFLAGS} -o hello_world hello_world.c

# Run main
run:
	./main

# Clean executables 
clean:
	rm -f hello_world main