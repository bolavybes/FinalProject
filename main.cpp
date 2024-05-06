#include "appdev.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main() {
	rock ret;
	srand(time(NULL));
	printf("Appication Developers Roc\n");
	scanf_s("%s", ret.rname, (unsigned)_countof(ret.rname));

	ret.min = rand() % 31 - 20;
	ret.max = rand() % 31 + 15;
	send_data(ret);

	return 0;
}