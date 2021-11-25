#pragma once
#include <string>
#include "SRTComponent.h"
#include "List.h"
using namespace std;


class SRT 
{
	string filePath;
	double secondsShift;

	List<SRTComponent*>* list;

 public:

	 SRT(string);

	 void loadFile();

	 void shift();

	 void saveFile();

	 string getPath() {
		 return this->filePath;
	 }

	 double getSeconds() {
		 return this->secondsShift;
	 }

	 List<SRTComponent*>* getList() {
		 return this->list;
	 }

	 void setPath(string _filePath) {
		 this->filePath = _filePath;
	 }

	 void setSeconds(double _seconds) {
		 this->secondsShift = _seconds;
	 }

};
