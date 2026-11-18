
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char copiedName[150];

    printf("Enter student full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("\nOriginal Name: %s", name);

    printf("\nLength: %d", (int)strlen(name));

    strcpy(copiedName, name);

    strcat(copiedName, " - FAST University");

    printf("\nModified Name: %s", copiedName);

    return 0;
}
