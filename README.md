# Face-Detection-project

This program uses OpenCV and C++ to detect faces in a image, video feed, or live stream using a webcam.
I have used OpenCV XML haar_cascades which is designed to detect mulitple objects in an given feed.
This project has many applications.


# Demo

https://drive.google.com/file/d/1A1kH7aSEPDvo1YqxG4AKi7iN1xI2D0p2/view?usp=sharing

# References

-  http://docs.opencv.org/2.4/modules/contrib/doc/facerec/facerec_tutorial.html
-  http://docs.opencv.org/2.4/doc/tutorials/objdetect/cascade_classifier/cascade_classifier.html

# Tools

- Visual Studio 2019
- OpenCV Library
- C++ Library
- WebCam

# Advantages of OpenCV:

    1. Open CV is free of cost and an open-source library.

    2. Open CV is fast as it is written in C/C++ language as compared to others

    3. With less system RAM, OpenCV works better.

    4. It supports most of the operating systems like Windows, Linux, and macOS.

# Requirements for running the program:
    1. OpenCV must be installed on the local machine.

    2. Paths to the classifier XML files must be given before the execution of the program. These XML files can be found in the OpenCV directory “opencv/data/haarcascades”.
    
    3. Use 0 in capture.open(0) to play webcam feed.

    4. For detection in a local video provide the path to the video.(capture.open(“path_to_video”)).

  
