#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){

    int n = 0;
    if (argc == 2) //we need exactly 2 arguments
    {
        n = atoi(argv[1]);
	info(n);
    }
    else
    {
	printf("error - invalid input \n");
    }

    exit(0);

}
