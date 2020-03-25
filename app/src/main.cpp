#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    Mat image = imread("test.png", IMREAD_COLOR);
    cout << image.size << endl;
    imwrite("out.png",image);
    namedWindow("TEST", WINDOW_NORMAL );
    imshow("TEST", image );
    waitKey(0);
    return 0;
}