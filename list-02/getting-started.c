#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char *argv[argc + 1]) {

  float i = 10'035.677'789;
  printf("double=%f\n", i);

  return EXIT_SUCCESS;
}
