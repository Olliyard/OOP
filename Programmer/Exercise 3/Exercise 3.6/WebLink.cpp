#include "WebLink.h"

WebLink::WebLink(std::string address):	address_(address)
{
}

void WebLink::printWebLink() const
{
	std::cout << address_;
}
