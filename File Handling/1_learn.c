#include <stdio.h>

int main()
{
    char data[50];

    FILE *fileptr2 = fopen("firstfile.txt", "w");
    FILE *fileptr3 = fopen("secondfile.txt", "a");
    FILE *fileptr = fopen("thirdfile.txt", "w");

    fputc('i', fileptr3);
    fputc('h', fileptr2);
    char ch = fgetc(fileptr);
    for (char ch)
    {
        printf("%c", ch);
        /* code */
    }

    fprintf(fileptr, "My name is Ayush\n");
    fprintf(fileptr, "Mi llamo Ayush Singhal\n");
    fscanf(fileptr, "%s", data);
    printf("%c", ch);
    fclose(fileptr);
    fclose(fileptr2);
    fclose(fileptr3);

    return 0;
}