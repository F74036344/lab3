lab3_qA: lab3_qA.o
	g++ -o lab3_qA lab3_qA.o
lab3_qA.o: lab3_qA.cpp
	g++ -c lab3_qA.cpp
lab3_qB: lab3_qB.o Clock.o
	g++ -o lab3_qB lab3_qB.o Clock.o
lab3_qB.o: lab3_qB.cpp Clock.h
	g++ -c lab3_qB.cpp
Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp
