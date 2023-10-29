CXX = x86_64-w64-mingw32-g++ #Windows
CXX = c++ #Linux

br : compilar ejecutar

compilar : src/juego.cpp include/*
	$(CXX) src/juego.cpp -o bin/fnh -I include -l curses -lncursesw

ejecutar : bin/fnh
	./bin/fnh

clean : bin/fnh
	rm bin/fnh