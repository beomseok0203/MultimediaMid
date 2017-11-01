#include <jni.h>
#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>



using namespace cv;

extern "C" {
JNIEXPORT void JNICALL
Java_com_example_kbs_facedetect_MainActivity_Same(JNIEnv *env, jobject instance, jlong matAddrInput,
                                                  jlong matAddrResult) {

    // TODO
    Mat &matInput = *(Mat *) matAddrInput;
    Mat &matResult = *(Mat *) matAddrResult;
    matResult = matInput;

}
JNIEXPORT void JNICALL
Java_com_example_kbs_facedetect_MainActivity_makeBlur(JNIEnv *env, jobject instance,
                                                              jlong matAddrInput,
                                                              jlong matAddrResult,jfloat x1,jfloat y1) {

    double x = x1-200;
    double y = y1-200;
    double w =400;
    double h =400;
    // TODO
    Mat &matInput = *(Mat *) matAddrInput;
    Mat &matResult = *(Mat *) matAddrResult;
    Mat tmp = *(Mat *) matAddrResult;
    //matResult = matInput;

    Rect r(x,y,w,h);

    Mat imgBlur, imgMask;
    //GaussianBlur( matInput, imgBlur, Size(31,31 ),5 );
    blur(matInput,imgBlur,Size(31,31));
    imgMask = Mat::zeros(matInput.size(), CV_8UC1);

        //Remove part of image
    rectangle(imgBlur, r, Scalar(0), CV_FILLED);
        //and create the mask
    rectangle(imgMask,r, Scalar(255), CV_FILLED);

    Mat output = imgBlur.clone();
    add(imgBlur, matInput, output, imgMask);
    //rectangle( output, Point(x,y), Point(w+x,h+y), Scalar(0,0,255), 2 );
    matResult = output;


}
}
