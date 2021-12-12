#include<stdio.h>
int main()
{
    FILE *source_file;
    char c;
    source_file= fopen("inputFile.txt","r");
    while(c=getc(source_file)!= EOF )
        printf(" %c",c);
return 0;

} 