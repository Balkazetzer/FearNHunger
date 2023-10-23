CXX = x86_64-w64-mingw32-g++ #Windows
CXX = c++ #Linux

br : compilar ejecutar

compilar : src/main.cpp include/*
	$(CXX) src/main.cpp -o bin/fnh -I include -l curses

ejecutar : bin/fnh
	./bin/fnh

clean : bin/fnh
	rm bin/fnh