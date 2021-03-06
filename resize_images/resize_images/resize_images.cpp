// resize_images.cpp : 画像のサイズを変更する
//

#include "resize_images.h"

//引数1：画像の渡し方(画像パスを渡す(-i)|画像パスを記載したファイルを渡す(-f)) 
//引数2：画像(ファイル)パス 
//引数3：サイズ変更方法(比率変更(h)|サイズ指定(s)) 
//引数4：比率(0.5 0.5)|サイズ(100 400)
int main(int argc, char *argv[])
{
    std::string sampleImage = "A:\\Downloads\\4.会計書類\\amazon\\sub_amazon_20160515_20160612.PNG";
    cv::Mat img = cv::imread(sampleImage);
    cv::Mat dst;

    //画像をリサイズする
    cv::resize(img, dst,cv::Size(), 0.5,0.5);

    cv::imshow("", img);
    cv::imshow("", dst);
    cv::waitKey(0);
}

