/*本程序用于提取图像的前景轮廓。本项目组的工作是将原先的OpenCV 1.X代码修改为OpenCV 2.X代码。
 * 代码在WIN7 + Qt5.2.0 + OpenCV2.4.8平台上测试，成功运行。
 * Tips: input文件夹、trimap文件夹与result文件夹放在程序运行的当前目录下，即可正常运行，产生结果。
 * 2014年1月7日
*/
#include "sharedmatting.h"
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    char fileAddr[256] = {0};

//    for (int n = 1; n < 28; ++n) {
        SharedMatting sm;

        sprintf(fileAddr, argv[1]);
        sm.loadImage(fileAddr);

        sprintf(fileAddr, argv[2]);
        sm.loadTrimap(fileAddr);

        sm.solveAlpha();

        sprintf(fileAddr, argv[3]);
        sm.save(fileAddr);
 //   }

    return 0;
}
