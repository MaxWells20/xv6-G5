#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc,char *argv[])
{
    printf(1,"\n ----ADDRESS TRANSLATION----\n");
    char *vm;
    vm=argv[1];

    printf(1,"\n Entered virtual address: %s\n",vm);
    printf(1,"\n Status from system call: %s",translate(vm));
    exit();
}

