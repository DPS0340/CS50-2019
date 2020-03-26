#include <stdio.h>
#include "../../header/cs50.h"

int main(void) {
    string answer = get_string("What's your name?\n");
    printf("hello, %s\n", answer);
}