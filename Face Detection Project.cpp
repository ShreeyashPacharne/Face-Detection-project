#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include<opencv2/objdetect.hpp>

using namespace std;
using namespace cv;

///		Face Detection in images	///


//void main()
//{
//	string path = "resources/test2.jpg";
//	Mat img = imread(path);
//	CascadeClassifier facecascade;
//	facecascade.load("resources/haarcascade_frontalface_default.xml");
//	
//	if (facecascade.empty()) { cout << "XML file not loaded" << endl; }
//	vector<Rect> faces;
//	facecascade.detectMultiScale(img, faces, 1.1, 10);
//
//	for (int i = 0; i < faces.size(); i++)
//	{
//		rectangle(img, faces[i].tl(), faces[i].br(), Scalar(0, 255, 255),2);
//	}
//
//	
//	imshow("Image", img);
//	waitKey(0);
//
//}

///		Face Detection in videos	///

void main()
{
	string path = "resources/sample.mp4";
	VideoCapture vp(path);
	Mat img;
	CascadeClassifier facecascade;
	facecascade.load("resources/haarcascade_frontalface_default.xml");
	if (facecascade.empty()) { cout << "XML file not loaded" << endl; }
	vector<Rect> faces;
	cout << "hey computer find faces" << endl << endl;

	while (true) {	

		vp.read(img);
		
		facecascade.detectMultiScale(img, faces,2,4);
		
		for (int i = 0; i < faces.size(); i++)
		{
		rectangle(img, faces[i].tl(), faces[i].br(), Scalar(0, 255, 255), 2);
		}
		
		imshow("Image", img);
		waitKey(1);
	}
}