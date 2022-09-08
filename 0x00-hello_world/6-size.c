#!/bin/bash
#include <stdio.h>

int main(void)
{
  char c;
  int i;
  long int li;
  long long int;
  float f;
  printf("Size of a char:%ld byte(s)\n Size of an int:%ld byte(s)\n Size of a long long int:%ld byte(s)\n Size of a float:%ld byte(s)\n",sizeof(c),sizeof(i),sizeof(li),sizeof(f));
  return(0);
}
