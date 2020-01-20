#pragma once
#include <iostream>
#include <string>
#include <vector>

class HTMLElement {
private:
	std::string m_tagName;
	std::string m_value;
	std::vector<HTMLElement> m_elements;
public:
	HTMLElement(std::string tagName, std::string value);
	std::string str();
};
