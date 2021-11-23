CC = g++
TARGET = main
OBJS = ./Signal/ConnectSignal.o \
./Signal/DisconnectSignal.o \
./Signal/MessageSignal.o \
./Signal/Signal.o \
StarlinkSatelite.o \
OrbitController.o \
User.o \
Main.o

all: $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

run:
	./$(TARGET)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
