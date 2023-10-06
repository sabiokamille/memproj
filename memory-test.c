#include "memory.h"

extern void **environ;

int f1 (char *str, int multiplier) {
    char local_str[strlen(str) + 1];
    strcpy(local_str, str);
    //printf("%s\n", local_str);
    int f1_result = strlen(str) * multiplier;
    print_stack(&local_str, environ[0]);
    return f1_result;
}

int main(int argc, char **argv, char*env[]) {
    char testVar[] = "My name is Kam!\n";
    f1(testVar, 2);
}