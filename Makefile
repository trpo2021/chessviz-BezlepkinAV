main.exe : main.cpp move.cpp bd.cpp display.cpp
	g++ -Wall -Werror -o main.exe main.cpp move.cpp bd.cpp display.cpp