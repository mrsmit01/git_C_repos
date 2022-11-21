#include <stdio.h>
#include <stdlib.h>
// desmonstrate what a function is in c
// opening line int main() is a type of function or method 

int main(){
// tell c to execute our function below
  printf("TOP");
  sayHi();
  printf("BOTTOM");
  return 0;
}
//making a simple function to say hi to user
// void tells the function what type of data to return in this case none
void sayHi (){
  printf("hello user");
}