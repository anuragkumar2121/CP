#include <stdio.h>
#include <string.h>
 
int main(){
    char input[100], output[100];
    int rI = 0, oI;
    printf("Enter String: \n");
    gets(input);

    while(input[rI] == ' '){
        rI++;
    }
 
    for(oI = 0;input[rI] != '\0'; rI++){
      if(input[rI]==' ' && input[rI-1]==' '){
          continue;
      }
      output[oI] = input[rI];
      oI++;
    }
    output[oI] = '\0';
    printf("String output without extra spaces %s\n", output);
 
    return 0;
}