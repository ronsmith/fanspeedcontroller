# Fan Speed Controller
This is a little project to create an HVAC fan speed controller for my 2003 Ford Ranger. The OEM fan control system relies on a resistor pack to limit the fan speed on 3 of the 4 switch settings. The fourth (full-speed) setting is just straight through. So, when the resistor pack fails (seems to be a common occurrance) only the full-speed setting continues to work. After replacing the resistor pack a couple of times, I decided there must be a better way.

See the fritzing diagram for details like the circuit diagram and PCB layout. I generally don't use the breadboard view.

I switched the projects from Arduino IDE to Platform.IO (with vscode). It doesn't matter all that much for a project of this size, but it made a good test case for me to make the switch in general.