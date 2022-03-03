#include "Subject.h"
#include "WebLink.h"
#include <iostream>


int main()
{
	WebLink link1("www.soccer.com");
	const WebLink link2("www.nfl.com");
	Subject football("Football is a great game. Bla bla bla.........");

	football.printText();

	football.setLink(&link1);

	football.printText();

	football.setLink(&link2);

	football.printText();

	const Subject multiplication("The table of multiplying by 10 is:\n 1x10  10\n 2x10  20\n 3x10  30\n 4x10  40\n 5x10  50\n 6x10  60\n 7x10  70\n 8x10  80\n 9x10  90\n10x10 100");

	multiplication.printText();
	std::cout << "This subject has the following link: " << multiplication.getLink() << std::endl << std::endl;

	return 0;
}