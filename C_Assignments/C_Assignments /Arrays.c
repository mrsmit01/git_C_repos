#include <stdio.h>
#include <stdlib.h>

int main()
{
  // defined what type of array we are making used ={}to sent numbers in array 

  int luckyNumbers[] = {4, 8, 15, 16, 23,42};
  //array position      0, 1, 2,  3 , 4 , 5
  
  // can modifiy the individual elements in an array by refering to the index 
  luckyNumbers[1] = 200;
// print out array base on the number you put inside[] arrays do start at 0 
  printf("%d", luckyNumbers[1]);
  
   //[] in an arry will just show how many elements the array can hold 
  int lotteryNumbers[10];
  //assing value to indivual arrays 
  lotteryNumbers[1]=80;
  //print array baseon the value in the array we want to print 
  printf("%d", lotteryNumbers[1]);
  // this is alson an array 
  char phrase[20]="Array";
  return 0;
}


