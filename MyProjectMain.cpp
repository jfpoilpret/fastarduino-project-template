/*
 * This empty project serves as a blueprint for new projects using FastArduino library.
 * The project comes configured for all supported targets, but you may possibly
 * choose only one target in your project.
 * If you do use several targets it si likely that you will need to add conditional
 * compilation with `#ifdef` to set different constants (e.g. pins, ports) according
 * to each target you want to support, as shown below.
 */

// Include necessary fastarduino headers
//--------------------------------------
#include <fastarduino/boards/board.h>
#include <fastarduino/gpio.h>

// Define specific constants per target
//-------------------------------------
// If you have only one target then you can remove all this section.
#if defined(ARDUINO_UNO) || defined(BREADBOARD_ATMEGA328P) || defined(ARDUINO_NANO)
#elif defined(ARDUINO_LEONARDO)
#elif defined (ARDUINO_MEGA)
#elif defined (BREADBOARD_ATTINYX4)
#else
#error "Current target is not yet supported!"
#endif

// Register all ISR here if any
//-----------------------------


// Main entry point
//-----------------

// Your main() function is the starting point of your program, it will be called
// as soon as the MCU is switched on or reset.
int main()
{
	// DO NOT REMOVE this line!
	board::init();
    
	// Add any specific initialization needed by your project before allowing interrupts
	// Do something

	// Enable interrupts
	sei();

	// Main loop should go here
	while (true)
	{
		// Do your stuff here
	}
    
	// Normally you should never reach the following line, but it is necessary to
	// make the compiler happy :-)
	return 0;
}

