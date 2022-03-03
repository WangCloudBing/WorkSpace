#include <iostream>
#include <iostream>
#include <queue>
#include "opencv2/opencv.hpp"
#include <vector>


using namespace std;

int main()
{
    cv::Mat img = cv::imread("/home/cloud/WorkSpace/1.jpg");

    cv::imshow("img", img);
    cv::waitKey(0);
    return 0;
}
