#include"MyVectorData.hpp"

//Destruktor
MyVectorData::~MyVectorData() {

}

//Operatorüberladung
MyVectorData& MyVectorData::operator=(const MyVectorData&) {
	return *this;
}
