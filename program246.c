// Maximum throughput in minimum hardware movement

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountSmall(char Fname[])
{
    int fd = 0, iRet = 0, i =0,iCnt = 0;
    char Data[10];

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;  // Failure
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i< iRet; i++)
        {
            if(Data[i] >= 'a' && Data[i] <= 'z')
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char Fname[20];
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    iRet = CountSmall(Fname);
    printf("Number of small characters are : %d\n",iRet);

    return 0;
}
