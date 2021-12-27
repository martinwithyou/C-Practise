#include <stdio.h>
#define MAX_SIZE 255

typedef struct{
    int id;
    char * name;
}ElementType;

typedef struct{
    ElementType datas[MAX_SIZE];
    int length;
}SeqList;

int main(){
    printf("hello world");
    return 0;
}