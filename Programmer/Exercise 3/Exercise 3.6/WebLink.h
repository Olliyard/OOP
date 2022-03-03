#include <iostream>

#pragma once
class WebLink
{
public:
	WebLink(std::string);
	void printWebLink()	const;

private:
	const std::string address_;
};

