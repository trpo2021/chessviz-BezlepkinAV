CFLAGS = -Wall -Wextra -Werror -I src
CPPFLAGS = -MMD

bin/chessviz: obj/src/chessviz/main.o obj/libhello.a
	$(CXX) $(CFLAGS) -o $@ $^

obj/src/chessviz/main.o: src/chessviz/main.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/libhello.a: obj/src/libchessviz/bd.o obj/src/libchessviz/display.o obj/src/libchessviz/move.o obj/src/libchessviz/bishop.o obj/src/libchessviz/king.o obj/src/libchessviz/knight.o obj/src/libchessviz/pawns.o obj/src/libchessviz/queen.o obj/src/libchessviz/rook.o
	ar rcs $@ $^

obj/src/libchessviz/bd.o: src/libchessviz/bd.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchessviz/display.o: src/libchessviz/display.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchessviz/move.o: src/libchessviz/move.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchessviz/bishop.o: src/libchessviz/bishop.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchessviz/king.o: src/libchessviz/king.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchessviz/knight.o: src/libchessviz/knight.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchessviz/pawns.o: src/libchessviz/pawns.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchessviz/queen.o: src/libchessviz/queen.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchessviz/rook.o: src/libchessviz/rook.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

test: bin/test.bin

bin/test.bin: test/testmain.o obj/libhello.a test/test.o
	$(CXX) $(CFLAGS) -o $@ $^

test/testmain.o: test/main.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -I thirdparty -o $@ $<

test/test.o: test/test.cpp
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) -I thirdparty -o $@ $<

.PHONY : clean test

clean:
	rm -rf obj/src/libchessviz/*.o obj/src/chessviz/*.o bin/chessviz bin/test.bin obj/*.o obj/*.a test/*.o

-include main.d bd.d display.d move.d bishop.d king.d knight.d pawns.d queen.d rook.d