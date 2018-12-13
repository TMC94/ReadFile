#include <stdio.h>
#include <stdlib.h>

void readFile(void);

int main()
{
    readFile();
    return 0;
}

readFile()
{
    char num[50]; // Store contents of file.

    FILE *ptrFile;
    ptrFile = fopen("readFile.txt", "r");

    if ( ptrFile == NULL )
    {
        printf("Unable to open/read file.");
    }
    else
    {
        FILE *pFile;
        char h[255];
        pFile = fopen("readFile.txt", "r");
        printf("\nContents: ");
        while (fgets(h,255,pFile) != NULL)
            printf("%s\n", h);
        fclose(pFile);


    }

}
