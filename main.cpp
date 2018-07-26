﻿#include <QApplication>
#include <wke.h>
#include "DialogLogin.h"
#include "DialogWke.h"
int main(int argc, char *argv[])
{
    //初始化wke
    //QString dll = "G:/qt_wke/lib/node.dll";


    //wkeSetWkeDllPath(reinterpret_cast<const wchar_t *>(dll.utf16()));
    wkeInitialize();
    QApplication a(argc, argv);
#if 0
    DialogWke w;
    w.LoadUrl("http://www.baidu.com");
#else
    DialogLogin w;

#endif
    w.show();

    return a.exec();
}
