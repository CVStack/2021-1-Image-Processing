#include <opencv2/opencv.hpp>

using namespace cv;

//Matrix Pratice
void InputArray_print(InputArray);
void OutputArray_increase(InputArray, OutputArray, double);

//int main()
//{
//	//Matrix 초기화
//	//Mat a; 
//	//Mat b(5, 3, CV_8U, Scalar(64)); // 5 x 3 행렬 생성, 8bit unsigned char, 64로 초기화
//	//std::cout << b << '\n';
//	//b.create(6, 4, CV_8U); // b 자리에 새로운 크기의 행렬 선언, 전에 선언했던 크기와 같다면 메모리 해제 x
//	//std::cout << b << '\n';
//
//	// 모든 원소 값이 1인 행렬 초기화
//	//Mat matrix_ones = Mat::ones(Size(3, 3), CV_8U);
//	//std::cout << "Matrix ones : " << matrix_ones << '\n';
//
//	// 단위 행렬 초기화
//	//Mat matrix_I_matrix = Mat::eye(Size(3, 3), CV_8U);
//	//std::cout << "Matrix I matrix : " << matrix_I_matrix << '\n';
//
//	// createTo method 초기화
//	//Mat mat;
//	//mat.create(Size(2, 2), CV_8SC1); // create method는 원소 값을 초기화 할 수 없음.
//	//
//	//// = operator나 setTo method로 초기화
//	//mat = Scalar(100);
//	//std::cout << mat << '\n';
//
//	//mat.setTo(Scalar(200));
//	//std::cout << mat << '\n';
//
//	//Matrix methods
//	//Mat truecolor(Size(3, 3), CV_8UC3, Scalar(230, 100, 0, 0)); //각 원소값의 차원(channel)이 3차원인 행렬을 선언.
//	//std::cout << "true color : " << truecolor << '\n';
//	//std::cout << "true color's depth : " << truecolor.depth() << '\n';
//	//std::cout << "true color's channel : " << truecolor.channels() << '\n';
//
//	//std::cout << '\n';
//
//	//Mat graycolor(Size(3, 3), CV_8UC1, Scalar(230, 0, 0, 0)); //각 원소값의 차원(channel)이 3차원인 행렬을 선언.
//	//std::cout << "gray color : " << graycolor << '\n';
//	//std::cout << "gray color's depth : " << graycolor.depth() << '\n';
//	//std::cout << "gray color's channel : " << graycolor.channels() << '\n';
//
//	//Matrix error case
//	//Mat d(Size(5, 3), CV_8U, Scalar(300));
//	//std::cout << "Matrix d : " << d << '\n'; //모든 원소가 255로 재설정, 부호없는 8비트이기 때문에 300이상 저장 x
//
//	//short data[] = { 1, 2, 3, 4, 5, 6 };
//	//Mat e(2, 3, CV_8S, data); //행렬에서 참조하는 데이터와 맞지 자료형을 사용시 잘못 참조 될 수 있음.
//	////short는 2byte임으로 CV_16S여야 정상적으로 동작.
//	//std::cout << "Matrix e : " << e << '\n';
//
//
//	//Matrix copy
//
//	//image read
//	//Mat A, C;
//	//A = imread("./image/PHS.jpg", IMREAD_COLOR); //Allocate the image to the Matrix.
//	////IMREAD_COLOR: convert image to the 3 Channel RGB
//
//	// shallow copy
//	//Mat B(A); //Copy operator --> copy only header and pointer 
//
//	//C = A; //Assigment Operator
//	//
//	//rectangle(A, Rect(30, 25, 350, 30), Scalar(0, 0, 255));
//	//namedWindow("A");
//
//	//imshow("A", A);
//	//waitKey();
//
//	//namedWindow("B");
//
//	//imshow("B", B);
//	//waitKey();
//
//	//namedWindow("C");
//
//	//imshow("C", C);
//	//waitKey();
//	////A, B, C point to the same image. --> The assignment operator and the copy constructor only copies the header.
//
//	// deep copy
//
//	//clone, copyTo
//	//Mat F = A.clone();
//	//rectangle(F, Rect(30, 25, 350, 30), Scalar(0, 0, 255));
//	//Mat G;
//	//A.copyTo(G);
//	//rectangle(A, Rect(30, 25, 350, 30), Scalar(0, 255, 255));
//	//Mat H;
//
//	//hconcat(A, F, H); //hconcat --> concat horizontally
//	//hconcat(H, G, H); //vconcat --> concat vertically
//
//	//imshow("H", H);
//	///*imshow("A", A);
//	//imshow("F", F);
//	//imshow("G", G);*/
//
//	//waitKey();
//
//	////clone(), copyTo() method copy the matrix ifself.
//
//	//converTo --> data type을 변경시킴.
//	//Mat mat(Size(5, 5), CV_8UC1, Scalar(300));
//	//std::cout << mat << '\n';
//	//std::cout << '\n';
//
//	//mat.convertTo(mat, CV_16UC1); //8비트 -> 16비트
//	//mat = Scalar(300);
//	//std::cout << mat << '\n';
//	//std::cout << '\n';
//
//
//	//reshape, resize
//	//Mat mat(Size(5, 5), CV_8UC1, Scalar(5)); 
//	//Mat mat2;
//
//	////resize --> 행을 기준으로 resize시킴, 즉 행만 변경됨 // 기존 행렬에 수정
//	//std::cout << mat << '\n';
//	//std::cout << '\n';
//	//mat.resize(10, Scalar(10)); // 행을 10으로 늘리고 빈곳은 10으로 채움.
//	//std::cout << mat << '\n';
//	//std::cout << '\n';
//	////reshape
//
//	//mat2 = mat.reshape(25, 2); // 기존의 행렬에서 reshape한 상태의 새 행렬을 return 
//	//std::cout << mat << '\n';
//	//std::cout << mat2 << '\n';
//
//	//at
//	//Mat mat(Size(3, 3),CV_8UC1, Scalar(300));
//	//std::cout << mat << '\n';
//	//std::cout << '\n';
//	//for (int x = 0; x < mat.rows; x++) {
//	//	for (int y = 0; y < mat.cols; y++) {
//	//		//mat.at<uchar>(x, y) = 50; //정상 동작x
//	//		mat.at<uchar>(x, y) = 50; //template은 matrix의 data type과 맞춰야함.
//	//	}
//	//}
//	//std::cout << mat << '\n';
//	//std::cout << '\n';
//
//	//행렬 연산 함수
//	//short data[] = { 1,2,3,4,5,6,7,8,9 };
//	//Mat mat1(Size(3, 3), CV_16SC1, data);
//	//short data2[] = { 1,1,1,1,1,1,1,1,1 };
//	//Mat mat2(Size(3, 3), CV_16SC1, data2);
//
//	////std::cout << "mat1 and mat2's cross : " << mat1.cross(mat2) << '\n';
//	//std::cout << "mat1 and mat2's dot : " << mat1.dot(mat2) << '\n';
//	//std::cout << "mat1 and mat2's mul : " << mat1.mul(mat2) << '\n';
//
//	//std::cout << "mat1's inverse : " << mat1.inv() << '\n';
//	//std::cout << "mat1's transpose : " << mat1.t() << '\n';
//
//	//inputArray, outputArray
//	/*Mat mat(Size(5, 5), CV_64FC1, Scalar(123.4));
//	InputArray_print(mat);*/
//
//	/*Mat mat2(Size(3, 3), CV_64FC1, Scalar(10.0));
//	Mat mat3; 
//
//	OutputArray_increase(mat2, mat3, 100);
//	InputArray_print(mat3);*/
//	
//	/*Mat img = imread("./image/PHS.jpg", IMREAD_COLOR);
//	std::cout << img.type() << " " << img.size() << '\n';*/
//}

//inputArray, outputArray
//inputArray는 matrix나 vector같은 자료형을 한번에 받을 때 사용하는 자료형이다.
void InputArray_print(InputArray _mat)
{
	Mat mat = _mat.getMat();
	for (int x = 0; x < mat.rows; x++) {
		for (int y = 0; y < mat.cols; y++) {
			std::cout << mat.at<double>(x, y) << " ";
		}
		std::cout << '\n';
	}
}

//inputArray는 matrix나 vector같은 자료형을 내보낼때 사용하는 자료형이다.
void OutputArray_increase(InputArray _input, OutputArray _mat, double n)
{
	Mat mat = _input.getMat();
	_mat.create(mat.size(), mat.type()); //OutputArray에 create 메소드로 새로운 메모리 할당가능.
	Mat mat2 = _mat.getMat();

	for (int x = 0; x < mat2.rows; x++) {
		for (int y = 0; y < mat2.cols; y++) {
			mat2.at<double>(x, y) = n;
		}
	}
}