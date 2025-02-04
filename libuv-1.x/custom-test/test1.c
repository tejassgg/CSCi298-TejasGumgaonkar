// test.c
#include <stdio.h>
#include <uv.h>

int main() {
    printf("libuv version: %s\n", uv_version_string());
    return 0;
}