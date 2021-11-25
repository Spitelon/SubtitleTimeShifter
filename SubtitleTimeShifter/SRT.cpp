#include "SRT.h"

SRT::SRT(string _filePath) {
	setPath(_filePath);
	setSeconds(0);
	this->list = new List<SRTComponent*>();


}