all:
	@ gcc main.c -o main
	@ cmd //C main < input.txt
cls:
	@ rm -f $(wildcard *.exe)