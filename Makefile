all: create_processes hello_world

create_processes: create_processes.c
	gcc -o create_processes create_processes.c

hello_world: hello_world.c
	gcc -o hello_world hello_world.c

clean:
	rm -f create_processes hello_world