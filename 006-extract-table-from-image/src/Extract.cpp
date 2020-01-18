#ifndef EXTRACT_
#define EXTRACT_

#include <stdlib.h>
#include <unistd.h>

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

#include "Extractor.hpp"

int main(int argc, char** argv)
{
  cout << "Reading image ..." << endl;
  // Read in the image
  Mat im = imread("./data/20200117134920228.jpg", IMREAD_GRAYSCALE);
  imshow("original", im);
  moveWindow("original", 0, 0);

  // Feed image to extraction process
  // TAOTODO
  Extract e;
  vector<Table> tables = e.extract(im);


  // Show result
  // TAOTODO

  waitKey(0);
}

#endif