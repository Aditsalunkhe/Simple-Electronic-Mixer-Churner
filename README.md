# Arduino-Based Automated Buttermilk Churner

## Project Description

The Arduino-Based Automated Buttermilk Churner is a simple embedded-system project designed to demonstrate the automatic operation of a motor for a churning mechanism.

The project uses an Arduino UNO to control the direction of a DC motor through an L293D motor driver. The motor is operated in one direction for a fixed period and then reversed for the next cycle. The complete circuit has been developed and simulated using Autodesk Tinkercad.

This project demonstrates the basic principles of motor control, direction reversal, and simple automation using an Arduino-based system.

## Working Principle

The Arduino UNO acts as the main control unit. It sends digital control signals to the L293D motor driver to determine the direction in which the DC motor rotates.

The motor driver receives two direction-control signals from the Arduino. By changing the state of these signals, the L293D changes the direction of motor rotation.

The Arduino also controls the enable input of the motor driver. In the current implementation, the motor is enabled at full PWM output.

During operation, the motor first rotates in one direction for a fixed period. After that period, the Arduino changes the control signals and the motor rotates in the opposite direction. This sequence repeats continuously, producing the bidirectional motion required for the proposed churning mechanism.

The current simulation uses a 5-second delay for both directions.

## Components and Their Functionalities

| Component | Function |
|---|---|
| Arduino UNO | Acts as the main controller. It generates the control signals required to operate the motor driver and determine the direction of motor rotation. |
| L293D Motor Driver | Acts as the interface between the Arduino and the DC motor. It provides bidirectional control of the motor by switching the polarity applied to the motor. |
| DC Motor | Produces the rotational motion required for the proposed churning mechanism. |
| Power Supply | Provides the electrical power required by the circuit and motor according to the simulation setup. |

## Control Connections

The Arduino uses three digital pins for motor control:

- D8: Motor direction control input 1
- D9: Motor direction control input 2
- D10: Motor enable control

The combination of the signals on D8 and D9 determines the direction of motor rotation, while D10 enables the motor driver.

## Simulation

The circuit has been designed and simulated in Autodesk Tinkercad using an Arduino UNO, L293D motor driver, and DC motor.

The simulation demonstrates the automatic reversal of motor direction and represents the basic electrical control system for an automated buttermilk churning mechanism.

## Project Scope

This project is a simulation-based prototype intended to demonstrate the electrical and control concept. A practical physical version would require further mechanical design, suitable motor and power selection, safety considerations, and an appropriate churning assembly.
