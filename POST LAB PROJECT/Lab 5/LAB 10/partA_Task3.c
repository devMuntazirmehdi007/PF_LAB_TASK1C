
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char copiedSentence[200];
    char ch;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Enter character to search: ");
    scanf("%c", &ch);

    char *ptr = strchr(sentence, ch);

    if(ptr != NULL)
    {
        printf("\nCharacter found!");
        printf("\nPosition: %d", (int)(ptr - sentence + 1));
    }
    else
    {
        printf("\nCharacter not found.");
    }

    strcpy(copiedSentence, sentence);

    printf("\nCopied Sentence: %s", copiedSentence);

    return 0;
}
