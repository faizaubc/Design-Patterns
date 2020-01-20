// ********************** //
// Builder Design Pattern.
// Construction of object is done
// seperately in step by step manner
// ********************** //
#pragma once
#include <string>
#include <vector>
#include "HTMLElement.h"

class HTMLBuilder {
private:
	HTMLElement m_htmlElement;
public:
	HTMLBuilder(HTMLElement htmlElement);
	//Create a new element.
	void addElement(std::string tag, std::string value);
};
