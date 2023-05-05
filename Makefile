OBJS	= main.o GUI.o TGdesk_login_dial.o TGdesk_main_frame.o TGdesk_add_car_form.o TGdesk_register_dial.o
SOURCE	= *.cpp
OUT	= a.out
CC	 = g++
FLAGS	 = -g -c -Wall `wx-config --cxxflags`
LFLAGS	 = `wx-config --libs`

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp 

GUI.o: GUI.cpp
	$(CC) $(FLAGS) GUI.cpp 

TGdesk_login_dial.o: TGdesk_login_dial.cpp TGdesk_login_dial.h
	$(CC) $(FLAGS) TGdesk_login_dial.cpp

TGdesk_register_dial.o: TGdesk_register_dial.cpp
	$(CC) $(FLAGS) TGdesk_register_dial.cpp 

TGdesk_main_frame.o: TGdesk_main_frame.cpp
	$(CC) $(FLAGS) TGdesk_main_frame.cpp 

TGdesk_add_car_form.o: TGdesk_add_car_form.cpp
	$(CC) $(FLAGS) TGdesk_add_car_form.cpp 
clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
