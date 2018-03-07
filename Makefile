all: main.cpp
	g++ -g main.cpp -std=c++11 -o app 
clean:
	rm -rf app
