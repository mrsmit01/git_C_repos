#include <stdio.h>
#include <stdlib.h>

int main(){
  //used char char varible to store george 
  char characterName [] = "George";
  //use int cahracter to store george age
  int characterAge = 70; 
  
  //impleted the varbile into the code by assinging a string value then searching for assigned string 


  printf(" there once was a man name %s\n" , characterName);
  printf("he is %d year old\n ", characterAge);
  //change varible value part way through the code 
  characterAge = 30; 

  printf("he really like the name %s\n", characterName);
  printf("but did not like being %d,\n", characterAge);
  
  return 0;
}