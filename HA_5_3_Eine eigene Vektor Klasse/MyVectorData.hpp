#pragma once

class MyVectorData {
private:
		
public:

	//Destruktor
	virtual ~MyVectorData();
	
	//Methoden
	virtual MyVectorData* clone() const = 0;
	virtual void print(bool = true) const = 0;
	
	//Operator�berladungen
	virtual MyVectorData& operator=(const MyVectorData&);

};
