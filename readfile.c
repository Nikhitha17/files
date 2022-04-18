#include<stdio.h>
int main()
{
    char str[500];
    FILE *fp;
    printf("Enter the Name of File: ");
    fp = fopen(readfile, "r");
    if(fp==NULL)
        printf("Error Occurred while Opening the File!");
    else
    {
        fscanf(fp, "%[^\0]", str);
        printf("\nContent of File is:\n\n");
        printf("%s", str);
    }
	fclose(fp);
    getch();
    return 0;
}

