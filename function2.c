#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

void printMenu() {
  printf("-----------------------------------\n");
  printf("Binary - Decimal - Octal Converter\n");
  printf("-----------------------------------\n");
  printf("1) Binary to Decimal\n");
  printf("2) Decimal to Octal\n");
  printf("3) Binary to Octal\n");
  printf("4) Decimal to Binary \n");
  printf("5) Octal to Decimal\n");
  printf("6) Octal to Binary\n");
  printf("-----------------------------------\n");
  printf("9) Exit\n");
  printf("-----------------------------------\n");

}

int getUserChoice() {
  int choice;
  scanf("%d", &choice);
  return choice;
}

void clearScreen() {

#ifdef _WIN32
  system("cls");
#else
  printf("\033[H\033[J");
#endif
}