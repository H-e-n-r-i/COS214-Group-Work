CC = g++
TARGET = main
OBJS = Cargo.o Crew.o Composition.o StarlinkSatelite.o 
all: $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CC) -c $< -o $@