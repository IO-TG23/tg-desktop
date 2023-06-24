OBJS	= main.o GUI.o TGdesk_login_dial.o TGdesk_main_frame.o TGdesk_add_car_form.o TGdesk_register_dial.o TGdesk_delete_client_form.o TGdesk_add_client_form.o Backend_API.o TGdesk_Register_QR.o TGdesk_import_car_form.o TGdesk_import_client_form.o
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

TGdesk_add_client_form.o: TGdesk_add_client_form.cpp
	$(CC) $(FLAGS) TGdesk_add_client_form.cpp 
	
TGdesk_delete_client_form.o: TGdesk_delete_client_form.cpp
	$(CC) $(FLAGS) TGdesk_delete_client_form.cpp 

Backend_API.o: Backend_API.cpp
	$(CC) $(FLAGS) Backend_API.cpp

TGdesk_Register_QR.o: TGdesk_Register_QR.cpp
	$(CC) $(FLAGS) TGdesk_Register_QR.cpp
	
TGdesk_import_car_form.o: TGdesk_import_car_form.cpp
	$(CC) $(FLAGS) TGdesk_import_car_form.cpp 

TGdesk_import_client_form.o: TGdesk_import_client_form.cpp
	$(CC) $(FLAGS) TGdesk_import_client_form.cpp 

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
