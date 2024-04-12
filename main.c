#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  int processNumber;

  // Asks the user how many processes he wants to create
  printf("How many process you want to create? ");
  scanf("%d", &processNumber);

  // The number of process have to be positive
  if (processNumber <= 0) {
    printf("\nSorry, the number of process have to be positive.\n");
    return 1;
  }

  // Create the child process
  for (int i = 0; i < processNumber - 1; i++) {
    pid_t pid;
    pid = fork();

    // Fail to create the child process
    if (pid < 0) {
      printf("Fork failed.\n");
      return 1;
    }

    // Runs the Hello World program for each process
    else if (pid == 0) {    
      execl("./hello_world", "./hello_world", NULL); // Runs the Hello World program
      printf("Exec failed.\n");
      return 0;
    }
  }

  // Parrent process: waits for all child processes to finish
  for (int i = 0; i < processNumber; i++) {
    wait(NULL);
  }
  execl("./hello_world", "./hello_world", NULL);
  printf("All processes have finished.\n");

  return 0;
}
