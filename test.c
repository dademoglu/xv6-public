int main() {
    int count = 1;
    int pid = 0, pid2 = 0;

    if ( (pid = fork()) ) {
        count = count + 2;
        printf("%d ", count);
    }

    if (count == 1) {
        count++;
        pid2 = fork();
        printf("%d ", count);
    }

    if (pid2) {
        wait();
        count = count * 2;
        printf("%d  ", count);
        printf("%d ",)
    }
 }