#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp;
    fp=fopen("input.txt","r"); //this is file pointer which is set to Read-Only
    char c; //to hold our text
    c=fgetc(fp);
    while(c!=EOF)
    {
        if(((c<='z')&&(c>='a'))||( //Declaring alphanumeric stings
        (c<='Z')&&(c>='A'))||((c<='9')
        &&(c>='0')))
    {
        printf("%c",c);
    }

    else
    {
        printf("\n");
        if(c!=' ')
        {
          printf("%c",c);
          printf("\n");
        }
    }
    c=fgetc(fp);
}

    fclose(fp); //Close our file
  return 0;

}
