#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NCHARS 1024

int parse(FILE *fp)
{
  char lbuff[NCHARS];
  char wbuff[NCHARS];
  int lnum;
  /* int i; */

  printf("in parse, using %p\n", (void *) fp);
  for (lnum = 1; fgets (lbuff, NCHARS, fp); lnum++)
    {
      printf("%s", lbuff);
      sscanf(lbuff, "%s", wbuff);

      /* printf("iterating thru wbuff till null char:\n"); */
      /* for (i = 0; wbuff[i] != '\0'; i++) */
      /* 	{ */
      /* 	  putchar(wbuff[i]); */
      /* 	} */
      /* printf("\n\n"); */

      if (strcmp(wbuff, "push") == 0)
      	{
      	  sscanf(lbuff, "%s", wbuff);
	  printf("would pass %s to push()\n", wbuff);
	  /* push(wbuff); */
      	}
      else if (strcmp(wbuff, "pall") == 0)
      	{
      	  sscanf(lbuff, "%s", wbuff);
	  printf("would pass %s to pall()\n", wbuff);
	  /* pall(wbuff); */
      	}
      else
      	{
      	  printf("L%i: unknown instruction %s\n", lnum, wbuff);
      	  return (2);
      	}
    }
  return (0);
}
