#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binaryToDecimal() {
    long long binaryNumber;
    printf("Please enter a binary number: ");
    scanf("%lld", &binaryNumber);

    int decimalNumber = 0, i = 0;
    while (binaryNumber != 0) {
        int remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    printf("The decimal equivalent is %d\n", decimalNumber);
}

void decimalToOctal() {
    int decimalNumber;
    printf("Enter the decimal number: ");
    scanf("%d", &decimalNumber);

    long octalNumber = 0;
    int i = 1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    printf("The octal equivalent is %ld\n", octalNumber);
}

void binaryToOctal() {
    long long binaryNumber;
    printf("Enter the binary number: ");
    scanf("%lld", &binaryNumber);

    int decimalNumber = 0, i = 0;
    while (binaryNumber != 0) {
        int remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    long octalNumber = 0;
    i = 1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    printf("The octal equivalent is %ld\n", octalNumber);
}

void decimalToBinary() {
    int decimalNumber;
    printf("Enter the decimal number: ");
    scanf("%d", &decimalNumber);

    long long binaryNumber = 0;
    int i = 1;
    while (decimalNumber != 0) {
        int remainder = decimalNumber % 2;
        decimalNumber /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }

    printf("The binary equivalent is %lld\n", binaryNumber);
}

void octalToDecimal() {
    int octalNumber;
    printf("Enter the octal number: ");
    scanf("%d", &octalNumber);

    int decimalNumber = 0, i = 0;
    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    printf("The decimal equivalent is %d\n", decimalNumber);
}

void octalToBinary() {
    int octalNumber;
    printf("Enter the octal number: ");
    scanf("%d", &octalNumber);

    int decimalNumber = 0, i = 0;
    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    long long binaryNumber = 0;
    i = 1;
    while (decimalNumber != 0) {
        int remainder = decimalNumber % 2;
        decimalNumber /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }

    printf("The binary equivalent is %lld\n", binaryNumber);
}
