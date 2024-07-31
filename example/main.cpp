// g++ -o main main.cpp `pkg-config --cflags --libs opencv4`

#include <iostream>
#include <opencv4/opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    string imagePath = "./lenna.jpeg";

    Mat image = imread(imagePath, IMREAD_COLOR);

    if (image.empty())
    {
        cerr << "Could not open or find the image!" << endl;
        return -1;
    }

    string windowName = "Display Image";

    namedWindow(windowName, WINDOW_NORMAL);

    imshow(windowName, image);

    waitKey(0);

    return 0;
}