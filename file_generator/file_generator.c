#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

#define GB 1 << 30
#define MB 1 << 20
#define KB 1 << 10
#define B 1

void create_file(long long);

int main(){
    srand(time(NULL));
    create_file(10*MB);
    return 1;
}

void create_file(long long required_size){
    long long file_size = 0LL;
    short digits;
    int rand_num;
    FILE *file = fopen("D:\\Education\\Algorithms\\lab1\\text_files\\A.txt", "w");
    while (file_size < required_size){
        rand_num = rand() + 1;
        fprintf(file, "%d\n", rand_num);
        digits = (int)log10(rand_num) + 1;
        file_size += (long long)(sizeof(char) * (digits + 2));
    }
    fclose(file);
    printf("Size of file: %lld bytes", file_size);
}

