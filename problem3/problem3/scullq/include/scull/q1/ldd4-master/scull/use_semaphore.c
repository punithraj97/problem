/* application to invoke and KEEP OPEN the device driver module, kernel_semaphore, and read the device file randomly*/  
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/ioctl.h> //_io(), _iow(), _ior() 
#include "use_scull.h"
#include <string.h>

int fd;
int keep_spinning = 1;

void catch_ctrlc(int signo) {
	printf ("Got SIGINT (%d), closing driver.\n",signo);
	keep_spinning = 0;
        close(fd);
}
int main ( ) 
{

        int i, k = 2000, l = 3000;
        int *p;
        char ch, write_buf[80], read_buf[80];

	signal(2, catch_ctrlc);

        fd = open("/dev/scull0", O_RDWR);

        if (fd == -1)
        {
                printf("Error in opening file \n");
                exit(-1);
        }
        printf ("What do you want? PRESS r for reading or w for write or i for ioctl: ");
        scanf ("%c", &ch);  /* First time, should choose writing */


        switch (ch) {
		case 'i':
			ioctl(fd,SORT_FIRST_QUANTUM); 
			break;
                case 'w': //sort
                        printf (" Enter the message to device: ");
                        scanf (" %[^\n]", write_buf);
                        write(fd,write_buf, strlen(write_buf)+1);
			//ioctl(fd,SCULL_IOCSORTFIRSTQUANTUM); 
                        // // ioctl(fd,SCULL_IOCXQUANTUM, &l); //get quantum
                        // printf("Earlier value = %d\n", l);
                        // k = ioctl(fd,SCULL_IOCQQUANTUM); //SCULL_IOCGQUANTUM

                        //  k = ioctl(fd,SCULL_IOCHQUANTUM, 3000);
                        //  ll = ioctl(fd,SCULL_IOCQQUANTUM);
                        // printf("Quantum = %d",k);
                        break;

                case 'r':
                        //lseek(fd, 0L, SEEK_SET);
                        //read(fd, read_buf, sizeof(read_buf));
			l = ioctl(fd,SCULL_IOCQQUANTUM);
			// printf("quantum = %d",l);
                       	//ioctl(fd,SCULL_IOCGQUANTUM,&l);
                      	printf("quantum = %d",l);
			break; 	
                case 's':
        	        printf ("Set the new value of quantum\n");
                        scanf (" %d", &l);
			k = ioctl(fd,SCULL_IOCHQUANTUM, l);
        	        printf ("earlier value of l = %d\n", k);
			break;

                default:
                        printf(" press either r or w \n");
                        break;
        }
	while (keep_spinning)
		;
	
	
  //      close(fd);


}