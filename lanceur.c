#include <stdio.h>

#include <sys/ipc.h>
#include <sys/shm.h>

int main() {
    // long key = ftok();
    int shmid = shmget(123456, sizeof(int) * 1000000000, IPC_CREAT);
    printf("%d\n", shmid);
}
