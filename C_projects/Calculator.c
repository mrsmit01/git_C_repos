#include <stdio.h>
#include <stdlib.h>


int main (){
  // assign value to number user will enter 
  double num1;
  double num2;
  //ask user to input first number than assign double it num1 varible 
  printf("Enter frist number:  ");
  scanf("%lf", &num1);
  
  //aske user to input second number than assing  to num2 varible
  printf("Enter second number:   ");
  scanf("%lf", &num2);
//print out what the answer is by assigning double value to the equation of num1 + num2
  printf("Answer:  %f",   num1 + num2);
return 0;
}