uartTest: uartTest1.o global.o
	gcc uartTest1.o global.o -o uartTest
uartTest.o:
	gcc uartTest1.c -c
global.o:
	gcc global.c -c
clean:
	rm -f uartTest1.o global.o