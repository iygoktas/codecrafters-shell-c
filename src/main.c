#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {

    char characters[2048];
    
    printf("$ ");
    fgets(characters, sizeof(characters), stdin);
    
  // Flush after every printf
    setbuf(stdout, NULL);
    characters[strlen(characters) - 1] = '\0';
  // TODO: Uncomment the code below to pass the first stage
   printf("%s: command not found", characters);
  return 0;
}
