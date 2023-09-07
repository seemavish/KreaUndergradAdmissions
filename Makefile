# declare the variable
CC = g++
CFLAGS = -Wall -g

main.exe: main.o admissions.o
	$(CC) $(CFLAGS) -o main.exe main.o admissions.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

admissions.o: admissions.cpp 
	$(CC) $(CFLAGS) -c admissions.cpp

# admissionsH.o: admissionsH.h
# 	$(CC) $(CFLAGS) -c admissionsH.h

clean:
	rm -f *o main.exe *gch