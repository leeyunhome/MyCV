// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "opencv2/opencv.hpp"
#include <iostream>
#include <vector>

using namespace cv;
using namespace std;

int main()
{
	Mat src = imread("bd.png");

	vector<int> params;
	params.push_back(IMWRITE_JPEG_QUALITY);
	params.push_back(1);
	imwrite("lenna.jpg", src, params);
	Mat dst = imread("lenna.jpg");

	if (src.empty())
	{
		cerr << "Image load failed" << endl;
		return -1;
	}

	imshow("src", src);
	imshow("dst", dst);

	waitKey();

	return 0;
}

