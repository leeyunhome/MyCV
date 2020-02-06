// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "opencv2/opencv.hpp"
#include <iostream>
#include <vector>

using namespace cv;
using namespace std;

int main()
{
	Mat src = imread("bd.png", IMREAD_REDUCED_COLOR_2);

	vector<int> params;
	params.push_back(IMWRITE_JPEG_QUALITY);
	params.push_back(5);
	imwrite("lenna.jpg", src, params);
	Mat dst = imread("lenna.jpg", IMREAD_REDUCED_COLOR_2);

	if (src.empty())
	{
		cerr << "Image load failed" << endl;
		return -1;
	}

	namedWindow("����", WINDOW_NORMAL);
	namedWindow("���纻", WINDOW_NORMAL);
	moveWindow("����", 100, 200);
	resizeWindow("���纻", 50, 550);
	imshow("����", src);
	imshow("���纻", dst);

	int flag;
	//flag = waitKey(20000);
	//cout << flag << endl;

	if ((flag = waitKey(0)) == 'q')
	{
		cout << flag << endl;
		destroyAllWindows();
	}

	return 0;
}

