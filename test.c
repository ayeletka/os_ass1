#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
    printf(1, "Hello world!\n");
    int pid;
    int* status = 0;

    printf(1, "fork test\n");

        pid = fork();
        if(pid < 0)
            exit(-10);
        if(pid == 0)
            exit(-13);
        else {

            int n = wait(status);
           int pidParent = getpid();
            printf(1, "pid: %d\n",pid);
            printf(1, "pidParent: %d\n",pidParent);

            printf(1, "status: %d\n",*status);
            printf(1, "return val: %d\n",n);
        }
    return 1;
}
