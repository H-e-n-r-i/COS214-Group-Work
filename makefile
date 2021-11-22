CC = g++
TARGET = main
OBJS = ./Rocket/Composition/Composition.o \
./Rocket/EngineState/EngineState.o \
./Rocket/Composition/MerlinEngine.o \
./Rocket/Composition/Falcon9Core.o \
./Rocket/Composition/VaccumMerlinEngine.o \
./Rocket/Rocket.o \
./Rocket/Falcon9.o \
./Rocket/FalconHeavy.o \
./Rocket/Configuration/Falcon9Configuration.o \
./Rocket/Configuration/FalconHeavyConfiguration.o \
./Launch/LaunchController.o \
./Launch/DockPhase.o \
./Launch/LaunchPhase.o \
./Launch/TestPhase.o \
./Launch/CompletionPhase.o \
./Launch/LaunchClient.o \
./Orbit/OrbitController.o \
./Orbit/StarlinkSatelite.o \
./Orbit/User.o \
./Orbit/Signal/Signal.o \
./Orbit/Signal/ConnectSignal.o \
./Orbit/Signal/DisconnectSignal.o \
./Orbit/Signal/MessageSignal.o \
Main.o

all: $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

run:
	./$(TARGET)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
