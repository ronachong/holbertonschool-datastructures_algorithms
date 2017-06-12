#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NCHARS 1024

int parse(FILE *fp)
{
  char lbuff[NCHARS];
  char wbuff[NCHARS];
  int lnum;

  printf("in parse, using %p\n", (void *) fp);
  for (lnum = 1; fgets (lbuff, NCHARS, fp); lnum++)
    {
      printf("%s", lbuff);
      sscanf(lbuff, "%s", wbuff);

      if (strcmp(wbuff, "push") == 0)
      	{
      	  ;
      	}
      else if (strcmp(wbuff, "pall") == 0)
      	{
      	  ;
      	}
      else
      	{
      	  printf("L%i: unknown instruction %s\n", lnum, wbuff);
      	  return (2);
      	}
    }
  return (0);
}
