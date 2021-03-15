#include <opencv2/opencv.hpp>
#include <vector>

using namespace cv;

int main()
{

	// Point_ 클래스 --> 가로와 세로 위치를 2차원 좌표로 나타내는 클래스
	//Point_<int> p1(3, 4);
	//Point_<int> p2(4, 5);

	//int rs_inner = p1.dot(p2); //p1와 p2의 내적 값을 구함.
	//std::cout << "p1와 p2의 내적 값 : " << rs_inner << '\n';
	//
	//double rs_cross = p1.cross(p2); //p1와 p2의 외적 값을 구함, 외적 : 두벡터와 직각인 벡터를 구함.
	//std::cout << "p1와 p2의 외적 값 " << rs_cross << "\n";

	////Point 연산 방식은 element-wise 방식
	//Point_<int> p3 = p1 + p2; // (7, 9)
	//Point_<int> p4 = p1 * 3; //  (9, 12)
	//bool isSame = p1 == p2; //false

	//std::cout << "p3 : " << p3 << '\n';
	//std::cout << "p4 : " << p4 << '\n';
	//std::cout << "isSame : " << isSame << '\n';

	//Size_ 클래스 --> 이미지나 사각형 크기를 규정
	//Size_<int> s1(4, 5); //(width, height)
	//std::cout << "s1's (width, height) : " << s1 << '\n';
	//std::cout << "s1's area : " << s1.area() << '\n'; // 20

	//Size_<int> s2;
	//s2.width = 5, s2.height = 6;
	//std::cout << "s2's (width, height) : " << s2 << '\n';
	//std::cout << "s2's area : " << s2.area() << '\n'; // 30

	//Rect_ 클래스 --> 사각형을 나타내는 클래스
	//Rect_<int> r1(3, 4, 5, 6); //Top_left 좌표가 (3, 4)이고 width x height 가 5 x 6인 직사각형
	//Rect_<int> r2(r1); //복사 생성자
	//Rect_<int> r3(Point_<int>(3, 4), Size_<int>(5, 6));
	//Rect_<int> r4(Point_<int>(3, 4), Point_<int>(8, 10)); //Top_Left, Bottom_Right

	//std::cout << "r1 == r2 : " << (r1 == r2) << '\n'; //element자체를 검사 --> 주소 검사 x
	//std::cout << "r1 == r3 : " << (r1 == r3) << '\n';
	//std::cout << "r1 == r4 : " << (r1 == r4) << '\n';

	//std::cout << "r1's topleft and bottomright : " << r1.tl() << ", " << r1.br() << '\n';
	//std::cout << "r1's size : " << r1.size() << '\n'; //rect의 size 정보를 Size_ class 형태로 return
	//std::cout << "r1's area : " << r1.area() << '\n';

	//Rect_<int> r5 = r1 + Point_<int>(1, 2); //r1를 (1,2)만큼 평행 이동
	//Rect_<int> r6 = r1 + Size_<int>(2, 2); //r1의 size를 width:2, height:2 만큼 증가시킴
	//std::cout << "r5's topleft and bottomright : " << r5.tl() << ", " << r5.br() << '\n';
	//std::cout << "r6's size : " << r6.size() << '\n'; 

	//Rect_<int> r7 = r5 & r6; //r5와 r6의 교차영역을 구함
	//std::cout << "r7's topleft and bottomright : " << r7.tl() << ", " << r7.br() << '\n';
	//std::cout << "r7's size : " << r7.size() << '\n';

	//Rect_<int> r8 = r5 | r6; //r5와 r6의 합영역을 구함
	//std::cout << "r8's topleft and bottomright : " << r8.tl() << ", " << r8.br() << '\n';
	//std::cout << "r8's size : " << r8.size() << '\n';

	//std::cout << "r8 contains Point(6,7)? : " << r8.contains(Point_<int>(6, 7)) << '\n'; //해당 point가 rect안에 포함되는지를 검사 

	//Rotated Rect_ 클래스 --> 회전된 사각형 클래스
	//중심좌표, size, angle로 사각형 조작

	//RotatedRect rr1(Point2f(4.0, 5.0), Size2f(5.0, 6.0), 60); //(4.0, 5.0) 좌표가 중심인 크기가 5 x 6인 직사각형을 60도 회전시킴
	//RotatedRect rr2(Point2f(0.0, 0.0), Point2f(1.0, 0.0), Point2f(1.0, 2.0)); //세 좌표로 직사각형 설정 --> 세좌표가 직사각형이여아함

	//std::cout << "rr2's center, size, angle : " << rr2.center << ", " << rr2.size << ", " << rr2.angle << '\n';

	//Point2f pts[4];
	//rr2.points(pts); //pts에 rr2의 좌표 값 저장
	//std::cout << "rr2's points" << '\n';

	//for (Point2f p : pts) {
	//	std::cout << p << '\n';
	//}

	//std::cout << rr1.boundingRect() << '\n'; //rr1를 포함하면서 최소 크기인 직사각형을 return

	//Vec 클래스 --> 원소 수가 작을 때 사용하는 숫자 벡터 클래스
	//Vec<int, 4> v1(1,2,3,4);
	//std::cout << "v1 : " << v1 << '\n';

	//Vec2f v2(3.1, 4.1);
	//std::cout << "v2 : " << v2 << '\n';

	//Point2f temp_p(v2); // vector --> point로 변환 가능
	//std::cout << "temp_p : " << temp_p << '\n';

	//Scalar 클래스 --> Vec<typename, 4>, 화소 값을 저장할때 많이 사용, Scaler_<double>의 약자.
	Scalar_<float> bgr_t(0, 0, 255, 1);
	std::cout << "bgr_t : " << bgr_t << '\n';
	
	Scalar gray_scale = 210; // 첫번째 원소값만 설정되고 나머지는 다 0으로 저장
	std::cout << "gray_scale : " << gray_scale << '\n';
	//Range 클래스 --> 시퀀스에서 연속되는 서브 시퀀스를 지정하는 클래스

	//Range r(1, 4); // 1, 2, 3 --> end는 포함하지 않음.
	//std::cout << "Range r : " << r << '\n';
	//std::cout << "Range r's size : " << r.size() << '\n';
	//std::cout << "Range r is empty ?  : " << r.empty() << '\n';
}