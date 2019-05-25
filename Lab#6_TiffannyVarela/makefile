Main.out: Main.o Carro.o Motor.o Chasis.o Pintura.o
	g++ Main.o Carro.o Motor.o Chasis.o Pintura.o -o Main.out

Main.o: Main.cpp Carro.h Motor.h Chasis.h Pintura.h
	g++ -c Main.cpp

Carros.o: Carro.cpp Carro.h Motor.h Chasis.h Pintura.h
	g++ -c Carro.cpp

Motor.o: Motor.cpp Motor.h
	g++ -c Motor.cpp

Chasis.o: Chasis.cpp Chasis.h
	g++ -c Chasis.cpp

Pintura.o: Pintura.cpp Pintura.h
	g++ -c Pintura.cpp
