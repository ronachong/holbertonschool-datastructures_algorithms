#include <stdlib.h>
#include <stdio.h>
#define NCHARS 1024

int parse(FILE *fp)
{
  char buff[NCHARS];

  printf("in parse, using %p\n", (void *) fp);
  while (fgets (buff, NCHARS, fp))
    {
      printf("%s", buff);
      printf("\n\n");
    }
  return (0);
}
