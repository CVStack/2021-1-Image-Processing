#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


void on_mouse(int, int, int, int, void*);
void on_change(int, void* );

Mat img;
Point2i p;

int main()
{
	img = imread("./image/PHS.jpg", IMREAD_COLOR);
	//imshow 
	//imshow("PHS", img); 
	//waitKey(); //행렬 img를 window상에 띄움.

	// waitkey()
	//imshow("Phs", img);
	//while (1) {
	//	int keycode = waitKey(); //waitKey 함수는 입력한 키의 값을 리턴

	//	if (keycode == 'i' || keycode == 'I') { // 입력한 키값이 i이면 이미지 반전
	//		img = ~img;
	//		imshow("img", img);
	//	}
	//	else if (keycode == 'q')
	//		break;
	//}

	// Mouse event

	//setMouseCallback
	//cout << "MouseCallback test start" << '\n';
	//namedWindow("phs");
	//setMouseCallback("phs", on_mouse); // phs window에서 마우스 이벤트 일어날때마다 on_mouse 함수 실행
	//imshow("phs", img);
	//waitKey();

	//Trackbar event
	//img = Mat::zeros(400, 400, CV_8UC1);
	//namedWindow("phs");
	//int bar_value;
	//createTrackbar("light", "phs", &bar_value, 100, on_change, &img); //trackname : light, callback : on_change
	////bar_value에 트랙바 값 받아옴, max : 100
	//imshow("phs", img);
	//waitKey();

	//cout << "last bar_value : " << bar_value << '\n';
}

void on_mouse(int _event ,int x ,int y ,int flags,void* data) { //call back function
	//event --> eventType이 넘겨짐, flags --> 현재 event 상태를 넘김
	switch (_event)
	{
	case EVENT_LBUTTONDOWN: //마우스 왼쪽 클릭시
		p = Point2i(x, y);
		cout << "EVENT_LBUTTONDOWN : " << p << '\n';
		break;
	case EVENT_LBUTTONDBLCLK: //마우스 왼쪽 더블 클릭시
		p = Point2i(x, y);
		cout << "EVENT_LBUTTONDBLCLK : " << p << '\n';
		break;

	case EVENT_MOUSEMOVE:
		if (flags & EVENT_FLAG_LBUTTON) {
			line(img, p, Point(x, y), Scalar(0, 255, 255), 2);
			imshow("phs", img);
			p = Point(x, y);
		}
	default:
		break;
	}
}
void on_change(int pos, void* userdata) {
	//pos에 트랙바 위치 받아옴
	cout << "bar_value : " << pos << '\n';
	Mat img = *(Mat*)userdata;

	img.setTo(pos * 16);
	imshow("phs", img);
}