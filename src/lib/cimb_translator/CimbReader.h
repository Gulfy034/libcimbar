#pragma once

#include "CellPosition.h"
#include "CimbDecoder.h"

#include <opencv2/opencv.hpp>
#include <string>

class CimbReader
{
public:
	CimbReader(std::string filename);
	bool load(std::string filename);

	unsigned read();
	bool done() const;

protected:
	cv::Mat _image;
	CellPosition _position;
	CimbDecoder _decoder;
};
