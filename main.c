#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void) {
    while (1) {

        delta:
        printMenu();
        int choice = getUserChoice();

        char answer;
        int q;
        clearScreen();
        switch (choice) {
            case 1:
                clearScreen();
                printf("----------------------------\n");
                printf("Binary to Decimal Converter \n");
                printf("----------------------------\n");

                calculation:
                binaryToDecimal();
                printf("-------------------------------------------\n");
                printf("Would you like to make another calculation?\n");
                printf("Yes/No (Y/N): ");
                scanf(" %c", &answer);

                choice:

                if (answer == 'y' || answer == 'Y') {
                    clearScreen();
                    goto calculation;
                } else if (answer == 'N' || answer == 'n') {
                    clearScreen();
                    printf("Press 0 to return to the main menu or Press 9 to shut down the program.\n");
                    scanf("%d", &q);

                    if (q == 0) {
                        printf("Returning...\n");
                        clearScreen();
                        goto delta;
                    } else if (q == 9) {
                        clearScreen();
                        printf("Exiting...");
                        exit(0);
                    } else {
                        printf("Invalid choice. Please try again. ");
                        goto choice;
                    }
                } else {
                    printf("Invalid choice. Please try again. ");
                    goto choice;
                }

                break;

            case 2:
                clearScreen();
                printf("---------------------------\n");
                printf("Decimal to Octal Converter \n");
                printf("---------------------------\n");

                calculation1:
                decimalToOctal();
                printf("-------------------------------------------\n");
                printf("Would you like to make another calculation?\n");
                printf("Yes/No (Y/N): ");
                scanf(" %c", &answer);

                choice1:

                if (answer == 'y' || answer == 'Y') {
                    clearScreen();
                    goto calculation1;
                } else if (answer == 'N' || answer == 'n') {
                    clearScreen();
                    printf("Press 0 to return to the main menu or Press 9 to shut down the program.\n");
                    scanf("%d", &q);

                    if (q == 0) {
                        printf("Returning...\n");
                        clearScreen();
                        goto delta;
                    } else if (q == 9) {
                        clearScreen();
                        printf("Exiting...");
                        exit(0);
                    } else {
                        printf("Invalid choice. Please try again. ");
                        goto choice1;
                    }
                } else {
                    printf("Invalid choice. Please try again. ");
                    goto choice1;
                }

                break;

            case 3:
                clearScreen();
                printf("---------------------------\n");
                printf("Binary to Octal Converter \n");
                printf("--------------------------\n");

                calculation2:
                binaryToOctal();
                printf("-------------------------------------------\n");
                printf("Would you like to make another calculation?\n");
                printf("Yes/No (Y/N): ");
                scanf(" %c", &answer);

                choice2:

                if (answer == 'y' || answer == 'Y') {
                    clearScreen();
                    goto calculation2;
                } else if (answer == 'N' || answer == 'n') {
                    clearScreen();
                    printf("Press 0 to return to the main menu or Press 9 to shut down the program.\n");
                    scanf("%d", &q);

                    if (q == 0) {
                        printf("Returning...\n");
                        clearScreen();
                        goto delta;
                    } else if (q == 9) {
                        clearScreen();
                        printf("Exiting...");
                        exit(0);
                    } else {
                        printf("Invalid choice. Please try again. ");
                        goto choice2;
                    }
                } else {
                    printf("Invalid choice. Please try again. ");
                    goto choice2;
                }

                break;

            case 4:
                clearScreen();
                printf("----------------------------\n");
                printf("Decimal to Binary Converter \n");
                printf("----------------------------\n");

                calculation3:
                decimalToBinary();
                printf("-------------------------------------------\n");
                printf("Would you like to make another calculation?\n");
                printf("Yes/No (Y/N): ");
                scanf(" %c", &answer);

                choice3:

                if (answer == 'y' || answer == 'Y') {
                    clearScreen();
                    goto calculation3;
                } else if (answer == 'N' || answer == 'n') {
                    clearScreen();
                    printf("Press 0 to return to the main menu or Press 9 to shut down the program.\n");
                    scanf("%d", &q);

                    if (q == 0) {
                        printf("Returning...\n");
                        clearScreen();
                        goto delta;
                    } else if (q == 9) {
                        clearScreen();
                        printf("Exiting...");
                        exit(0);
                    } else {
                        printf("Invalid choice. Please try again. ");
                        goto choice3;
                    }
                } else {
                    printf("Invalid choice. Please try again. ");
                    goto choice3;
                }

                break;

            case 5:
                clearScreen();
                printf("----------------------------\n");
                printf("Octal to Decimal Converter \n");
                printf("---------------------------\n");

                calculation4:
                octalToDecimal();
                printf("-------------------------------------------\n");
                printf("Would you like to make another calculation?\n");
                printf("Yes/No (Y/N): ");
                scanf(" %c", &answer);

                choice4:

                if (answer == 'y' || answer == 'Y') {
                    clearScreen();
                    goto calculation4;
                } else if (answer == 'N' || answer == 'n') {
                    clearScreen();
                    printf("Press 0 to return to the main menu or Press 9 to shut down the program.\n");
                    scanf("%d", &q);

                    if (q == 0) {
                        printf("Returning...\n");
                        clearScreen();
                        goto delta;
                    } else if (q == 9) {
                        clearScreen();
                        printf("Exiting...");
                        exit(0);
                    } else {
                        printf("Invalid choice. Please try again. ");
                        goto choice4;
                    }
                } else {
                    printf("Invalid choice. Please try again. ");
                    goto choice4;
                }

                break;

            case 6:
                clearScreen();
                printf("---------------------------\n");
                printf("Octal to Binary Converter \n");
                printf("--------------------------\n");

                calculation5:
                octalToBinary();
                printf("-------------------------------------------\n");
                printf("Would you like to make another calculation?\n");
                printf("Yes/No (Y/N): ");
                scanf(" %c", &answer);

                choice5:

                if (answer == 'y' || answer == 'Y') {
                    clearScreen();
                    goto calculation5;
                } else if (answer == 'N' || answer == 'n') {
                    clearScreen();
                    printf("Press 0 to return to the main menu or Press 9 to shut down the program.\n");
                    scanf("%d", &q);

                    if (q == 0) {
                        printf("Returning...\n");
                        clearScreen();
                        goto delta;
                    } else if (q == 9) {
                        clearScreen();
                        printf("Exiting...");
                        exit(0);
                    } else {
                        printf("Invalid choice. Please try again. ");
                        goto choice5;
                    }
                } else {
                    printf("Invalid choice. Please try again. ");
                    goto choice5;
                }
                break;

            case 9:
                clearScreen();
                printf("Exiting...");
                exit(0);


            default:
                printf("Invalid choice. Please choose between 1-6 or 9 to exit.\n");
        }
    }

    return 0;
}