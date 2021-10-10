#include <stdlib.h>
#include <stdio.h>

void showCow(int);
void showMessage(int, char**);
int length(char*);


int main(int argc, char **argv){
  if(argc == 1){
    printf("Usage: %s [message]\n", argv[0]);
    return 1;
  }

  showMessage(argc, argv);
  showCow(5);
  return 0;
}

void showMessage(int size, char *message[]){
  int len = size-2;//count spaces between arguments except first arg and first space
  for(int i=1;i<size;i++) len+=length(message[i]);

  printf(" ");
  for(int i=0;i<len+2;i++) printf("_");
  printf("\n<");
  for(int i=1;i<size;i++) printf(" %s", message[i]);
  printf(" >\n ");
  for(int i=0;i<len+2;i++) printf("-");
  printf("\n");
}

void showCow(int shiftSize){
  char shift[shiftSize];
  for(int i=0;i<shiftSize;i++)shift[i] = ' ';
  shift[shiftSize] = '\0';
  printf("%s\\   ^__^\n%s \\  (oo)\\_______\n%s    (__) \\       )\\/\\\n%s         ||----w |\n%s         ||     ||\n", shift, shift, shift, shift, shift);
}

int length(char *txt){
  int size = 0;
  while(txt[size] != '\0') size++;
  return size;
}