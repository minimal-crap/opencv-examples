#include<iostream>
#include<cstdlib>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

Vec3b return_random_pixel(){
	Vec3b random_pixel;
	srand(time(NULL));
	random_pixel[0] = rand() % 255;
	srand(time(NULL));
	random_pixel[1] = rand() % 255;
	srand(time(NULL));
	random_pixel[2] = rand() % 255;
	return random_pixel;
};

int main(){
	Mat abc(301, 260, CV_8UC3, Scalar(0,0,0));
	for(int i = 0; i < abc.rows; i++){
		for(int j =0; j < abc.cols; j++){
			abc.at<Vec3b>(i, j) = return_random_pixel();
		}		
	}
	imwrite("in.jpg",abc);
	return 0;
}
