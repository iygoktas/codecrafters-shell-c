#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {

    while(1)
    { 
      char characters[2048];
      printf("$ ");
      fgets(characters, sizeof(characters), stdin);
      setbuf(stdout, NULL);
      characters[strlen(characters) - 1] = '\0';
      if (strcmp(characters, "exit") == 0)
      {
        break;
      }
      else if (strncmp(characters, "echo ", 5) == 0){
        printf("%s\n", characters + 5);
        continue;
      }
      else if 
      ((strncmp(characters, "type ", 5) == 0)
      && 
      ((strcmp(characters + 5, "echo") == 0) 
      || 
      (strcmp(characters + 5, "exit") == 0)
      || 
      (strcmp(characters + 5, "type") == 0)))
      {
        printf("%s is a shell builtin\n", characters + 5);
        continue;
      }
      else
      {
        if (strncmp(characters, "type ", 5) == 0)
        {
          printf("%s: not found\n", characters+5);
        }
        else
        {
          printf("%s: not found\n", characters);
        }
        
      }
      
      
    }
    
    return 0;
}
