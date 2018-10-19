/*
Write a program that gets a string from the user and then displays it in reverse order.
Name: Óscar Rúben Gómez Ríos
Mail: A01411750@itesm.mx
Matricule Number: A01411750
Date: 17/10/2018
 */

#include <stdio.h>
#define x 1000
#define y 1000

int main()
{
    char string[x], a[y];
    int begin, end, count = 0;

    printf("Give me a string\n");
    gets(string);



    while (string[count] != '\0')
        count++;

    end = count - 1;

    for (begin = 0; begin < count; begin++) {
        a[begin] = string[end];
        end--;
    }

    a[begin] = '\0';

    printf("%s\n", a);

    return 0;
}