all:
	g++ -I src/include -L src/lib -o build/main main.cpp -lmingw32 -lSDL2main -lSDL2