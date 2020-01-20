#include "HTMLElement.h"
#include <sstream>

HTMLElement::HTMLElement(std::string tagName, std::string value)
: 	m_tagName(tagName),
	m_value(value),
	m_elements()
{
}

std::string HTMLElement::str()
{
	std::ostringstream htmlString;
	htmlString << "<" << m_tagName << ">" << std::endl;
	if (m_value.size() > 0)
	{
		htmlString << "  " << m_value << std::endl;
	}

	for (auto &ele : m_elements)
	{
		htmlString << ele.str();
	}

	htmlString << "</" << m_tagName << ">" << std::endl;
	return htmlString.str();
}

