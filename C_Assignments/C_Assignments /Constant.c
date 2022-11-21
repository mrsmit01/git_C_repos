#include <stdio.h>
#include<stdlib.h>

// paly with making varible constant so they cant be modified 
int main(){
    //value cannot be change. constant are all captial
    const int FAV_NUM = 5;
    int num = 2; 
  printf("%d\n",num);
  num = 8;
  printf("%d",num);
  return 0;
// this is consider a constant nothing will chagne 
  printf("hello world");
  // alsot a constant cannot be modifed or change unles user changes it 
  printf("%d", 90);
  return 0;
}