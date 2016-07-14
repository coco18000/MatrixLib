//----------------------------------------------//
//@date		2016/07/13
//@author	Katsuya Kikuchi
//@brief	Matrix library
//----------------------------------------------//

#ifndef _MATRIXLIB
#define _MATRIXLIB

#include <iostream>

namespace MatrixLib{
	template<class T>
	class Matrix{
	public:

		//Matrixの中身を表示
		friend std::ostream& operator <<(std::ostream& os,Matrix mat);

	private:
		unsigned int ROW_SIZE;
		unsigned int COL_SIZE;
	};
}

#endif