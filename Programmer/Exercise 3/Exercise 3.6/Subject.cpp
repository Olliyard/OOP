#include "Subject.h"
#include "WebLink.h"

Subject::Subject(string text)
{
	text_ = text;
	link_ = NULL;
}

void Subject::setLink(const WebLink* link)
{
	link_ = link;
}

const WebLink* Subject::getLink()	const
{
	return link_;
}

void Subject::printText()	const
{
	std::cout << text_ << std::endl;

	if (link_ == NULL)
	{
		std::cout << "No further information available" << endl << endl;
	}

	else
	{
		std::cout << "Further information here: ";
		link_->printWebLink();
		std::cout << std::endl << std::endl;
	}
}
