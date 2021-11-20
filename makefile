main: OrbitalControl.o StarlinkSatelite.o User.o Signal.o ConnectSignal.o DisconnectSignal.o MessageSignal.o Spacecraft.o CrewDragon.o Dragon.o LaunchController.o TestPhase.o LaunchPhase.o DockPhase.o ConfigurationController.o Falcon9Configuration.o FalconHeavyConfiguration.o Falcon9.o FalconHeavy.o Rocket.o Composition.o Falcon9Core.o MerlinEngine.o VaccuumMerlinEngine.o Main.o
	g++ OrbitalControl.o StarlinkSatelite.o User.o Signal.o ConnectSignal.o DisconnectSignal.o MessageSignal.o Spacecraft.o CrewDragon.o Dragon.o LaunchController.o TestPhase.o LaunchPhase.o DockPhase.o ConfigurationController.o Falcon9Configuration.o FalconHeavyConfiguration.o Falcon9.o FalconHeavy.o Rocket.o Composition.o Falcon9Core.o MerlinEngine.o VaccuumMerlinEngine.o Main.o -o main

Main.o: OrbitalControl.h StarlinkSatelite.h User.h Signal.h ConnectSignal.h DisconnectSignal.h MessageSignal.h Spacecraft.h CrewDragon.h Dragon.h LaunchController.h TestPhase.h LaunchPhase.h DockPhase.h ConfigurationController.h Falcon9Configuration.h FalconHeavyConfiguration.h Falcon9.h FalconHeavy.h Rocket.h Composition.h Falcon9Core.h MerlinEngine.h VaccuumMerlinEngine.h Main.cpp
	g++ -c Main.cpp

OrbitalControl.o: OrbitalControl.h OrbitalControl.cpp
	g++ -c OrbitalControl.cpp

StarlinkSatelite.o: StarlinkSatelite.h StarlinkSatelite.cpp
	g++ -c StarlinkSatelite.cpp

User.o: Signal.h User.h User.cpp
	g++ -c User.cpp

Signal.o: OrbitalControl.h Signal.h Signal.cpp
	g++ -c Signal.cpp

ConnectSignal.o: Signal.h ConnectSignal.h ConnectSignal.cpp
	g++ -c ConnectSignal.cpp

DisconnectSignal.o: Signal.h DisconnectSignal.h DisconnectSignal.cpp
	g++ -c DisconnectSignal.cpp

MessageSignal.o: Signal.h MessageSignal.h MessageSignal.cpp
	g++ -c MessageSignal.cpp

Spacecraft.o: LaunchController.h Spacecraft.h Spacecraft.cpp
	g++ -c Spacecraft.cpp

CrewDragon.o: Spacecraft.h CrewDragon.h CrewDragon.cpp
	g++ -c CrewDragon.cpp

Dragon.o: Spacecraft.h Dragon.h Dragon.cpp
	g++ -c Dragon.cpp

LaunchController.o: Spacecraft.h LaunchController.h LaunchController.cpp
	g++ -c LaunchController.cpp

TestPhase.o: LaunchController.h TestPhase.h TestPhase.cpp
	g++ -c TestPhase.cpp

LaunchPhase.o: LaunchController.h LaunchPhase.h LaunchPhase.cpp
	g++ -c LaunchPhase.cpp

DockPhase.o: LaunchController.h DockPhase.h DockPhase.cpp
	g++ -c DockPhase.cpp

ConfigurationController.o: ConfigurationController.h ConfigurationController.cpp
	g++ -c ConfigurationController.cpp

Falcon9Configuration.o: ConfigurationController.h Falcon9Configuration.h Falcon9Configuration.cpp
	g++ -c Falcon9Configuration.cpp

FalconHeavyConfiguration.o: ConfigurationController.h FalconHeavyConfiguration.h FalconHeavyConfiguration.cpp
	g++ -c FalconHeavyConfiguration.cpp

Falcon9.o: Falcon9Configuration.h Rocket.h Falcon9.h Falcon9.cpp
	g++ -c Falcon9.cpp

FalconHeavy.o: FalconHeavyConfiguration.h Rocket.h FalconHeavy.h FalconHeavy.cpp
	g++ -c FalconHeavy.cpp

Rocket.o: Rocket.h Rocket.cpp
	g++ -c Rocket.cpp

Composition.o: Composition.h Composition.cpp
	g++ -c Composition.cpp

Falcon9Core.o: Composition.h Falcon9Core.h Falcon9Core.cpp
	g++ -c Falcon9Core.cpp

MerlinEngine.o: Composition.h MerlinEngine.h MerlinEngine.cpp
	g++ -c MerlinEngine.cpp

VaccuumMerlinEngine.o: Composition.h VaccuumMerlinEngine.h VaccuumMerlinEngine.cpp
	g++ -c VaccuumMerlinEngine.cpp

clean:
	rm -f *.o *~

run:
	./main