COS214-Group-Work

[Nhlamulo]

[Abstract Factory] - Used to create the different rocket stages
[Observer] - Used for monitoring the health of every single rocket engine
[Prototype] - Used it to clone rocket engines
[Bridge] - Used it to abstract out some of the different rocket engines' health states
[Stategy] - Used in a similar fashion to Bridge but it selects a State from the object passed in through the [Bridge] object
[Composite] - Used to contruct the Falcon9Core of the first stage of each rocket type


[Robyn]
[Command]
Used to send signals, such as the connect signal, message signal and disconnect signal, between the User (Invoker) and the Orbital Control (Receiver). The signals that are sent by the User are used by the Receiver to communicate with the satellites that are in orbit. The pattern is made up of 6 classes. 
User (Invoker)
Signal (Command)
ConnectSignal (Concrete command)
DisconnectSignal (Concrete Command)
MessageSignal (Concrete command)
Orbital Control (Receiver)

[Chain of Responsibility]
The chain of responsibility is used to work and control the various satellites that are in orbit. The Orbital Control class is used as the main controls in this pattern. The Starlink Satellite class is used similarly to a linked list pattern, where each Starlink Satellite class is a single satellite that has a successor. The Orbital Control class creates the satellites and communicates with the satellites through signals and messages. The pattern is made up of 2 classes:
Orbital Control and Starlink Satellite.
