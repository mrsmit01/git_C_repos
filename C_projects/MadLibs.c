#include <stdio.h>
#include <stdlib.h>

int main()
{
  //assign varible for mad lib
  char color[20];
  char pluralNoun[20];
  char celebrity[20];
//trying to search for a first and last name for celbities
  char celebrityA[20];
  char celebrityB[20]; 
//use %s to add a sting value to color for customer input
  printf(" Eneter a color:  ");
  scanf("%s", color);
// use %s to add a sting value to pluralNoun varible 
  printf(" Enter a pluralNoun:  ");
  scanf("%s", pluralNoun);
// use %s to add a stirng value to celebrity varible 
  printf("enter a celebrity:  ");
  scanf("%s", celebrity);

  //print out celebrity first and last name 
  printf("enter a celberity full name:  ");
  scanf("%s%s", celebrityA, celebrityB);
  
  //prints out results
  printf("Roses are %s\n", color);
  printf("%s are blue\n", pluralNoun);
  printf("I love %s\n", celebrity);
  // now will print both celebrities first and last name 
  printf(" i will always love %s %s\n", celebrityA, celebrityB);

  return 0;
}
