BMItest: BMI.o test.o
		g++ -o BMItest BMI.o test.o
BMI.o:BMI.cpp BMI.h
		g++ -c BMI.cpp
test.o:test.cpp BMI.h
		g++ -c test.cpp
clean:
		rm BMI*.o test*.o
