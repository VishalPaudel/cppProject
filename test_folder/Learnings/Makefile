# -*- Makefile -*-

# Target_Name: Dependencies
# 	  statement

main: main.o Student.o
	g++ main.o Student.o -o main

main.o: main.cpp
	g++ -c main.cpp main.o

Student.o: Student.cpp
	g++ -c Student.cpp Student.o

clear:
	rm *.o main

