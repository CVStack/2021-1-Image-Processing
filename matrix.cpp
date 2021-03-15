#include <opencv2/opencv.hpp>

using namespace cv;

//Matrix Pratice


//int main()
//{
//	//Matrix 초기화
//	//Mat a; //아무 것도 안 정해진 행렬
//	//Mat b(5, 3, CV_8U, Scalar(64)); // 5 x 3 행렬 생성, 8bit unsigned char, 64로 초기화
//	//std::cout << b << '\n';
//	//b.create(6, 4, CV_8U); // b 자리에 새로운 크기의 행렬 선언, 전에 선언했던 크기와 같다면 메모리 해제 x
//	//std::cout << b << '\n';
//
//	//Mat c(Size(300, 300), CV_8UC3, Scalar(0, 0, 255)); // 5x3 의 행렬, 모든 원소 red 값을 가지게 함.
//	//
//	//imshow("c", c);
//	//waitKey();
//
//	//Mat d(Size(5, 3), CV_8U, Scalar(300));
//	//std::cout << "Matrix d : " << d << '\n'; //모든 원소가 255로 재설정, 부호없는 8비트이기 때문에 300이상 저장 x
//
//	//short data[] = { 1, 2, 3, 4, 5, 6 };
//	//Mat e(2, 3, CV_8S, data); //행렬에서 참조하는 데이터와 맞지 자료형을 사용시 잘못 참조 될 수 있음.
//	//std::cout << "Matrix e : " << e << '\n';
//
//	//Mat matrix_ones = Mat::ones(Size(3, 3), CV_8U);
//	//std::cout << "Matrix ones : " << matrix_ones << '\n';
//	//Mat matrix_I_matrix = Mat::eye(Size(3, 3), CV_8U);
//	//std::cout << "Matrix I matrix : " << matrix_I_matrix << '\n';
//
//	//Mat A, C;
//
//	//A = imread("./image/PHS.jpg", IMREAD_COLOR); //Allocate the image to the Matrix.
//	////IMREAD_COLOR: convert image to the 3 Channel RGB
//
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
//}