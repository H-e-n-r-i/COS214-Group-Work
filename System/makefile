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
./Spacecraft/Load/Crew.o \
./Spacecraft/Load/Cargo.o\
./Spacecraft/Spacecraft.o \
./Spacecraft/Dragon.o \
./Spacecraft/CrewDragon.o \
./Orbit/StarlinkSatelite.o \
./Orbit/Signal/Signal.o \
./Orbit/Signal/ConnectSignal.o \
./Orbit/Signal/DisconnectSignal.o \
./Orbit/Signal/MessageSignal.o \
./Orbit/OrbitController.o \
./Orbit/User.o \
./Launch/LaunchController.o \
./Launch/DockPhase.o \
./Launch/LaunchPhase.o \
./Launch/TestPhase.o \
./Launch/CompletionPhase.o \
./Launch/LaunchClient.o \
Main.o

all: $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) -g

run:
	./$(TARGET)

%.o: %.cpp
	$(CC) -c $< -o $@ -g

clean:
	rm -f $(TARGET) $(OBJS)
