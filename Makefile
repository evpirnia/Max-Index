PROGRAM1=main
PROGRAM2=functions
PROGRAM=arrays

default: $(PROGRAM1).c $(PROGRAM2).c
	cc -c $(PROGRAM1).c
	cc -c $(PROGRAM2).c
	cc -o $(PROGRAM) $(PROGRAM1).o $(PROGRAM2).o
	./$(PROGRAM)

clean: $(PROGRAM1).o $(PROGRAM2).o
	rm *.o arrays
