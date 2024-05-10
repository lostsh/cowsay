/**
* \file cow.c
* \version 0.1 alpha
* \author Vernhes Yohann (lostsh)
* \date 20 Oct 2021
*/

#include <stdlib.h>
#include <stdio.h>

typedef unsigned short int wlen_t;
wlen_t length(const char*);

void showCow(int);
void showMessage(int, char**);


int main(int argc, char **argv){
  if(argc == 1){
    printf("Usage: %s [message]\n", argv[0]);
    return 1;
  }

  showMessage(argc, argv);
  showCow(4);
  return 0;
}

void showMessage(int argc, char **argv){
  int msg_len = argc-2;//count spaces between arguments except first arg and first space
  for(int i=1;i<argc;i++) msg_len+=length(*(argv+i));

  printf(" ");
  for(int i=0;i<msg_len+2;i++) printf("_");
  printf("\n<");
  for(int i=1;i<argc;i++) printf(" %s", *(argv+i));
  printf(" >\n ");
  for(int i=0;i<msg_len+2;i++) printf("-");
  printf("\n");
}

void showCow(int shift_size){
  char shift[shift_size];
  for(int i=0;i<shift_size;i++) *(shift+i) = ' ';
  *(shift+shift_size-1) = '\0';
  //printf("%s\\   ^__^\n%s \\  (oo)\\_______\n%s    (__) \\       )\\/\\\n%s         ||----w |\n%s         ||     ||\n", shift, shift, shift, shift, shift);
  printf("%s^__^\n%s(oo)\\_______\n%s(__) \\       )\\/\\\n%s     ||----w |\n%s     ||     ||\n", shift, shift, shift, shift, shift);
}

wlen_t length(const char *txt){
  wlen_t size = 0;
  while('\0' != *(txt+size)) size++;
  return size;
}