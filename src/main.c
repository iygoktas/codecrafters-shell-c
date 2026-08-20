#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {

    while(1)
    { 
      char characters[2048];
      printf("$ ");
      fgets(characters, sizeof(characters), stdin);
      
      if (strcmp(("%s",characters), "exit") == 0)
      {
        printf("ADAFDDDFDFADF");
        break;
      }
      else
      {
        setbuf(stdout, NULL);
        characters[strlen(characters) - 1] = '\0';
        // TODO: Uncomment the code below to pass the first stage
        printf("%s: command not found\n", characters);
      }
      
      
    }
    
    return 0;
}
