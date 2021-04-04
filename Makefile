CFLAGS = -Wall -Wextra -Werror -I src
CPPFLAGS = -MMD

bin/chessviz: obj/src/chessviz/main.o obj/libhello.a
	$(CXX) $(CFLAGS) -o $@ $^

obj/src/chessviz/main.o: src/chessviz/main.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/libhello.a: obj/src/libchessviz/bd.o obj/src/libchessviz/display.o obj/src/libchessviz/move.o
	ar rcs $@ $^

obj/src/libchessviz/bd.o: src/libchessviz/bd.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchessviz/display.o: src/libchessviz/display.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<


obj/src/libchessviz/move.o: src/libchessviz/move.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

.PHONY : clean

clean:
	rm -rf obj/src/libchessviz/*.o obj/src/chessviz/*.o bin/chessviz

-include main.d bd.d display.d move.d