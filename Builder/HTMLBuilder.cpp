#include "HTMLBuilder.h"

HTMLBuilder::HTMLBuilder(HTMLElement htmlElement)
: m_htmlElement(htmlElement)
{
}

void HTMLBuilder::addElement(std::string tag, std::string value)
{
	m_htmlElement.emplace_back(HTMLElement(tag, value));
}
