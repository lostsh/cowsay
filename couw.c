#include <stdlib.h>
#include <stdio.h>

void showCow(char*);
char* parseMessage(char**);
int length(char*);

int main(int argc, char **argv){
  if(argc == 1){
    printf("Usage: %s [message]\n", argv[0]);
    return 1;
  }
  showCow(parseMessage(argv));
  printf("Lengh : %d", length(argv[1]));
  return 0;
}

char *parseMessage(char *message[]){
  //char *msg = NULL;
  //msg = malloc(1*sizeof(char));
  //for(int i=1;i<size;i++){
  //  msg = realloc(
  //}
  return message[1];
}

void showCow(char *message){
  printf("\n%s\n", message);
  printf("\\   ^__^\n \\  (oo)\\_______\n    (__) \\       )\\/\\\n         ||----w |\n         ||     ||\n");
}

int length(char *txt){
  int size = 0;
  while(txt[size] != '\0') size++;
  return size;
}