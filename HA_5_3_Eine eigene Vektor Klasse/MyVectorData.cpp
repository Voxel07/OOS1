#include"MyVectorData.hpp"

//Destruktor
MyVectorData::~MyVectorData() {

}

//Operator�berladung
MyVectorData& MyVectorData::operator=(const MyVectorData&) {
	return *this;
}
