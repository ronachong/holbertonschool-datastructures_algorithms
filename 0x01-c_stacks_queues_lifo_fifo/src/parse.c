#include <stdlib.h>
#include <stdio.h>
#define NCHARS 1024

int parse(FILE *fp)
{
  char lbuff[NCHARS];
  char wbuff[NCHARS];

  printf("in parse, using %p\n", (void *) fp);
  while (fgets (lbuff, NCHARS, fp))
    {
      printf("%s", lbuff);
      sscanf(lbuff, "%s", wbuff);
      printf("first word?: %s\n", wbuff);
    }
  return (0);
}
