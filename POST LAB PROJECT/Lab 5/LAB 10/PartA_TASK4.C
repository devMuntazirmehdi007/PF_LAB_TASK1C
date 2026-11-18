
#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][100];
    char copiedName[100];
    char ch;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\n----- Student Records -----\n");

    for(int i = 0; i < 5; i++)
    {
        printf("\nStudent %d: %s", i + 1, names[i]);

        printf("\nLength: %d", (int)strlen(names[i]));
    }

    strcpy(copiedName, names[0]);

    printf("\n\nCopied First Student Name: %s", copiedName);

    printf("\n\nEnter character to search: ");
    scanf(" %c", &ch);

    for(int i = 0; i < 5; i++)
    {
        if(strchr(names[i], ch) != NULL)
        {
            printf("\n'%c' found in %s", ch, names[i]);
        }
        else
        {
            printf("\n'%c' not found in %s", ch, names[i]);
        }
    }

    return 0;
}
