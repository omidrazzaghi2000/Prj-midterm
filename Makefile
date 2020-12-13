CXX = g++
CXXFLAGS = -std=c++2a -Wall -I h -I /usr/local/include/gtest/ -c
LXXFLAGS = -std=c++2a -Ih -pthread
OBJECTS = ./obj/board.o ./obj/traverse.o ./obj/main.o
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)

./obj/board.o: ./cpp/board.cpp
	$(CXX) $(CXXFLAGS) ./cpp/board.cpp -o ./obj/board.o
./obj/traverse.o: ./cpp/traverse.cpp
	$(CXX) $(CXXFLAGS) ./cpp/traverse.cpp -o ./obj/traverse.o
./obj/main.o: ./cpp/main.cpp  ./cpp/board.cpp
	$(CXX) $(CXXFLAGS) ./cpp/main.cpp -o ./obj/main.o
clean:
	rm -fv $(TARGET) $(OBJECTS)
