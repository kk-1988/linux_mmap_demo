#include <stdio.h>
#include <stding.h>

/*
* ./hello_drv_test
*/
int main(int argc,char *argv[])
{
    int fd;
    char buf[1024];
    int len;

    /* 2.打开文件 */
    fd = open("/dev/hello",O_RDWR);
    if(fd == -1)
    {
        printf("can not open file /dev/hello\n");
        return -1;
    }

    /* mmap */
    

    /* write */

    /* red & compare */


	return 0;
}
