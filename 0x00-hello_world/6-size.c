#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
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
