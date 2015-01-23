#include <stdio.h>

void print_head(void)
{
  printf("/*\n");
  printf(" * Generated by mk_constants\n");
  printf(" */\n");
  printf("\n");
  printf("#ifndef __UM_CONSTANTS_H\n");
  printf("#define __UM_CONSTANTS_H\n");
  printf("\n");
}

void print_constant_str(char *name, char *value)
{
  printf("#define %s \"%s\"\n", name, value);
}

void print_constant_int(char *name, int value)
{
  printf("#define %s %d\n", name, value);
}

void print_tail(void)
{
  printf("\n");
  printf("#endif\n");
}
