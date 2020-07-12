// #include <opencv2/core.hpp>
// #include <opencv2/imgcodecs.hpp>
// #include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;


int main(int argc, char* argv[])
{
	Mat frame;
	VideoCapture video(0);
	while(1){
		video >> frame;
		imshow("Video here", frame);
        char c = (char)waitKey(25);
        if (c == 27)
            break;
    }

return 0;
}