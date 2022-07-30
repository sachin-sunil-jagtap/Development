#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

// O_RDONLY     Read
// O_WRONLY     Write
// O_RDWR       Read + Write

int main()
{
    char Fname[20];
    int fd = 0;     // File descriptor

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;  // Failure
    }

    printf("File is succefully opened with FD %d\n",fd);

    return 0;
}