#include <iostream>
#include <tcdsmModel/particles.h>
#include <tcdsmModeler/simplemodeler.h>
#include <tcdsmUtil/ScopedLog.h>

using namespace std;
using namespace TCDSM::Modeler;
using namespace TCDSM::Model;
using namespace TCDSM::Util;

int main(int argc,char ** argv)
{
    SimpleModeler modeler;

    modeler.setNetCDFFile("D:\\Code\\LiYang\\TCDSM-MY\\NCData\\TC_07.nc");  // 输入的WRF数据
    modeler.setModelSavePath("./");                                         // 输出路径

    modeler.setDefault();
    modeler.execute();
}