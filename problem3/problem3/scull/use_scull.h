
#include <linux/ioctl.h>

#define SCULL_IOC_MAGIC  'k'
/* Please use a different 8-bit number in your code */

#define SCULL_IOCRESET    _IO(SCULL_IOC_MAGIC, 0)

/*
 * S means "Set" through a ptr,
 * T means "Tell" directly with the argument value
 * G means "Get": reply by setting through a pointer
 * Q means "Query": response is on the return value
 * X means "eXchange": switch G and S atomically
 * H means "sHift": switch T and Q atomically
 */
#define SCULL_IOCSQUANTUM _IOW(SCULL_IOC_MAGIC,  1, int*)
#define SCULL_IOCSQSET    _IOW(SCULL_IOC_MAGIC,  2, int*)
#define SCULL_IOCTQUANTUM _IO(SCULL_IOC_MAGIC,   3)
#define SCULL_IOCTQSET    _IO(SCULL_IOC_MAGIC,   4)
#define SCULL_IOCGQUANTUM _IOR(SCULL_IOC_MAGIC,  5, int*)
#define SCULL_IOCGQSET    _IOR(SCULL_IOC_MAGIC,  6, int*)
#define SCULL_IOCQQUANTUM _IO(SCULL_IOC_MAGIC,   7)
#define SCULL_IOCQQSET    _IO(SCULL_IOC_MAGIC,   8)
#define SCULL_IOCXQUANTUM _IOWR(SCULL_IOC_MAGIC, 9, int*)
#define SCULL_IOCXQSET    _IOWR(SCULL_IOC_MAGIC,10, int*)
#define SCULL_IOCHQUANTUM _IO(SCULL_IOC_MAGIC,  11)
#define SCULL_IOCHQSET    _IO(SCULL_IOC_MAGIC,  12)

/*
 * The other entities only have "Tell" and "Query", because they're
 * not printed in the book, and there's no need to have all six.
 * (The previous stuff was only there to show different ways to do it.
 */
#define SCULL_P_IOCTSIZE _IO(SCULL_IOC_MAGIC,   13)
#define SCULL_P_IOCQSIZE _IO(SCULL_IOC_MAGIC,   14)
/* ... more to come */

#define SCULL_IOCSWAPPOINTERS _IO(SCULL_IOC_MAGIC,   15)
#define SCULL_IOC_MAXNR 15





