#pragma once
#include <string>
#include "Polygone2d.h"

class Svg
{
	std::string file_name;
	std::string body;
	float width;
	float height;

public:
	Svg(const std::string &filename, float w, const float h);
	~Svg();

	std::string toString() const;
	bool save() const;

	void addPolygon(const Polygone2d &p);
};
