/* Program to perform string operations in menu driven without functions */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int len(char *s);
void concat(char *s1, char *s2);
void reverse(char *s1);

int main()
{
    char s1[20], s2[20];
    int ch, length;

    while(ch < 1 || ch >4)
    {
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@\n");
        printf("@\tMain Menu\t@");
        printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@\n");
        printf("\t1. String Length\n");
        printf("\t2. String Concatenation\n");
        printf("\t3. String Reverse\n");
        printf("\t4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", s1);
                length = len(s1);
                printf("Length of %s is %d\n", s1, length);
                break;

            case 2:
                printf("Enter the first string: ");
                scanf("%s", s1);
                printf("Enter the second string: ");
                scanf("%s", s2);
                concat(s1, s2);
                printf("Concatenated is %s\n", s1);
                break;

            case 3:
                printf("Enter a string: ");
                scanf("%s", s1);
                reverse(s1);
                printf("Reverse is %s\n", s1);
                break;

            case 4:
                exit(0);
            default: printf("\nError in choice\n");
        }
    }
}

int len(char *s)
{
    int length = 0;
    while (*s != '\0')
    {
        s++;
        length++;
    }

    return(length);
}

void concat(char *s1, char *s2)
{
    while(*s1 != '\0')
        s1++;

    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 ='\0';
}

void reverse(char *s1)
{
    int length, c;
    char *begin, *end, temp;
    length = len(s1);
    begin = s1;
    end = s1;

    for (c=0; c < (length -1); c++)
        end++;

    for (c = 0; c < length/2; c++)
    {
        temp = *end;
        *end = *begin;
        *begin = temp;
        begin++;
        end--;
    }
}
