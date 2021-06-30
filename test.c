#include <stdio.h>

typedef void (*Callback)(int a);

void printHello(int a)
{
	printf("hello %d\n", a);
}

void callPrintHello(Callback func)
{
	func(1);
}

int main(int argc, const char *argv[])
{
	callPrintHello(printHello);
	return 0;
}
