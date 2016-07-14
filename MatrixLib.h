//----------------------------------------------//
//@date		2016/07/13
//@author	Katsuya Kikuchi
//@brief	Matrix library
//----------------------------------------------//

#ifndef _MATRIXLIB
#define _MATRIXLIB

#include <iostream>

namespace MatrixLib{

	template<typename T, unsigned int row, unsigned int col>
	class Matrix{
	public:
		Matrix();
		~Matrix();

		//Matrixの中身を表示
		friend std::ostream& operator <<(std::ostream& os,Matrix mat);

	private:
		T** matrix;
		unsigned int ROW_SIZE;
		unsigned int COL_SIZE;
	};
}

#endif