CXX=g++
CFLAGS=-I. -Wall
TARGET=Main
OBJS=../Composition/Composition.o \
../EngineState/EngineState.o \
../Composition/MerlinEngine.o \
../Composition/Falcon9Core.o \
../Composition/VaccumMerlinEngine.o \
../Rocket/Rocket.o \
../Rocket/Falcon9.o \
../Rocket/FalconHeavy.o \
../ConfigurationController/Falcon9Configuration.o \
../ConfigurationController/FalconHeavyConfiguration.o \
Main.o

all: $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)
    
%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

run:
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJS)
    