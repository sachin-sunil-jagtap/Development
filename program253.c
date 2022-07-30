#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

#define FILESIZE 1024

bool FileCompare(char Source[], char Destination[])
{
    int Fdsrc = 0, Fddest = 0, iRet1 = 0, iRet2 = 0,iCmp = 0;
    char Buffer1[FILESIZE];
    char Buffer2[FILESIZE];

    Fdsrc = open(Source,O_RDONLY);
    if(Fdsrc == -1)
    {
        printf("Unable to open source file\n");
        return false;
    }

    Fddest = open(Destination,O_RDONLY);
    if(Fddest == -1)
    {
        printf("Unabel to open destination file\n");
        return false;
    }

    while(1)
    {
           iRet1 = read(Fdsrc,Buffer1,FILESIZE);
           iRet2 = read(Fddest,Buffer2,FILESIZE);

           if((iRet1 == 0) || (iRet2 ==0) || (iRet1 != iRet2))
           {
                break;
           }
           iCmp = memcmp(Buffer1,Buffer2,iRet1);
           if(iCmp != 0)
           {
                break;
           }
    }

    close(Fdsrc);
    close(Fddest);

    if((iRet1 == 0) && (iRet2 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char Fname1[20];
    char Fname2[20];
    bool Bret;

    printf("Enter file name which contains the data\n");
    scanf("%s",Fname1);

    printf("Enter the file name that you want to create\n");
    scanf("%s",Fname2);

    Bret = FileCompare(Fname1, Fname2);
    if(Bret == true)
    {
        printf("Files are same\n");
    }
    else
    {
        printf("Files are different\n");
    }

    return 0;
}