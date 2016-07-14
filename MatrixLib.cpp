//----------------------------------------------//
//@date		2016/07/13
//@author	Katsuya Kikuchi
//@brief	implement MatrixLib.h
//----------------------------------------------//

#include "MatrixLib.h"

namespace MatrixKib{

	template <class T, unsigned int row, unsigned int col>
	Matrix::Matrix(){
		this->COL_SIZE = col;
		this->ROW_SIZE = row;
	}
	Matrix::~Matrix(){
		delete matrix;
	}

	std::ostream& operator <<(std::ostream& os, Matrix mat){
		os<<"ok";
		//os<<dt.x<<","<<dt.y<<std::endl;
		return os;
	}

}