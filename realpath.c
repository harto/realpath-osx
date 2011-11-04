/*
 * A minimal implementation of the realpath command, which isn't included in Mac
 * OS X distributions.
 */

#include <sys/param.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  if (argc != 2) {
    fprintf(stderr, "Usage: realpath <path>\n");
    return 1;
  }
  
  char* path = argv[1];
  char result[PATH_MAX];
  
  if (realpath(path, result)) {
    printf("%s\n", result);
    return 0;
  } else {
    fprintf(stderr, "Bad path: %s\n", result);
    return 2;
  }
}
