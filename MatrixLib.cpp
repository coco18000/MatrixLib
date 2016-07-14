//----------------------------------------------//
//@date		2016/07/13
//@author	Katsuya Kikuchi
//@brief	implement MatrixLib.h
//----------------------------------------------//

#include "MatrixLib.h"

friend std::ostream& Matrix::operator <<(std::ostream& os,Matrix mat){
	//os<<dt.x<<","<<dt.y<<std::endl;
	return os;
}