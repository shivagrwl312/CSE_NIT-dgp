#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
  pid_t child_pid;
  child_pid = fork();
  if (child_pid == 0) {
    sleep (60);
  }
  else {
    printf("parent finished");
  }
  return 0;
}

