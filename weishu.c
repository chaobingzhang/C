#include <stdio.h>
#include <windows.h>  // 需要包含这个头文件

int main() {
    printf("char 的大小: %zu 字节\n", sizeof(char));
    printf("int 的大小: %zu 字节\n", sizeof(int));
    printf("long 的大小: %zu 字节\n", sizeof(long));
    printf("指针的大小: %zu 字节\n", sizeof(void*));
    return 0;
}