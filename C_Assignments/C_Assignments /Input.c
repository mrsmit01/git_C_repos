#include <stdio.h>
#include <stdlib.h>

int main (){
  //ask for age using int
  int age;
  //prins to scren for user to enter their age 
  printf("Enter your age; ");
  //%d shows coe that we are looking for a double stirng in the age varible 
  scanf("%d", &age);
  // prints out users age with  the %double assigne the value user emter to age varible 
  printf("You are %d years old", age);
  
// assing a double value to varible gpa
  double gpa;
//prompts user to enter in their current gpa
  printf("Enter your current gpa:  ");
//%lf shows we are looking for a double value in the gpa varible we created  
  scanf("%lf", &gpa);
  // prints out user gpa with %f assigning the double to gpa varible
  printf("Your gpa is %f", gpa);


  
//same thing using the chare character
  char grade;
  //ask user to enter their grade in 
  printf("Enter your grade:   ");
  // take user inpute assigne grade value of char with %C
  scanf("%c", &grade);
  // prints out students grade 
  printf("Your grade is %c", grade);

// holding at least 20 names in the name varible,only includes the first name if you enter a 
//last name wont input it 
char name[20];
// screen asks user for their name;
printf("Enter your name:  ");
//%s assigns a string value to name varible, fgets is more straight forward not 
//feget you can specifiy how many times a user can input a stirng
// stdin stand for standard input, which tells fgets to  where we want to ge the infor from
fgets(name, 20, stdin);
// prints the whole thing out 
printf("your name is %s", name);
  return 0;
}