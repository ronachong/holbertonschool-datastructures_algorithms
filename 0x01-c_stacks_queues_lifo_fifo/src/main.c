#include "header.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int fret;

  if (argc != 2)
    {
      printf("USAGE: monty file\n");
      return (EXIT_FAILURE);
    }

  fp = fopen(argv[0], "r");
  if (fp == NULL)
    {
      printf("Error: Can't open file %s\n", argv[0]);
      return (EXIT_FAILURE);
    }
  printf("fp is %p\n", (void *) fp);
  /* if (parse(fp) == EXIT_FAILURE) */
  /*   return (EXIT_FAILURE); */
  fret = parse(fp);
  fclose(fp);

  if (fret != 0)
    return (EXIT_FAILURE);
  printf("ran to completion\n");
  return (EXIT_SUCCESS);
}
