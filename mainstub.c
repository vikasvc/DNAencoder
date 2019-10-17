#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "conversionFunctions.h"
#include "encodingFunctions.h"
#include "menuCommands.h"
int main(){

    char testInput[] = "sprouts number5";
    char testOutput[200];

    printf("should be s: %c\n", testInput[0]);

  printf("result of 27 dtb %d\n", decToBase3(27));
  printf("result of 2 dtb %d\n", decToBase3(2));
  printf("dec to array of 27\n");
  int *tArray = decToBase3Array(27);
     
    for(int b = 0; b < 4; b++){
        printf("%d",tArray[b]);
                } 

   printf("encode array\n");

  encodeArray(testInput, testOutput); 
printf("-------array finished encoding-----------\n");
/*
  for (int g = 0; g < 11; g++){
      printf("%c", testOutput[g]);
  }
    printf("\n");
*/



//    printf("opening file\n");
  //  encodeFile("papers.txt");
  
    printf("keyboard input\n");

    encodeText();

    return 0;
}
