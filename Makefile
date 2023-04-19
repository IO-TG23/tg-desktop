OBJS	= main.o
SOURCE	= main.cpp
OUT	= a.out
CC	 = g++
FLAGS	 = -g -c -Wall `wx-config --cxxflags`
LFLAGS	 = `wx-config --libs`

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp 

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
