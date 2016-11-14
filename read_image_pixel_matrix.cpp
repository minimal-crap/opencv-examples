#include<iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"


using namespace std;
using namespace cv;

int main(){
	Mat img = imread("/usr/share/pixmaps/faces/leaf.jpg");
	/*for(int i = 0; i<img.rows; i++){
		for(int j =0; j<img.cols; j++){
			Vec3b bgr_pixel = img.at<Vec3b>(i, j);
			cout<<bgr_pixel<<endl;
		}
	}*/
	cout<<img<<endl;
	return 0;
}
