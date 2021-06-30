test:test.o
	gcc -g test.o -o test
.PHONY:clean
clean:
	rm *.o
