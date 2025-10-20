/**************************************************************************
**   Copyright @ 2025 TOOTzoe.com
**   Special keywords: thor 10/20/2025 2025
**   Environment variables:
**
**
**
**   E-mail : toot@tootzeo.com
**   Tel    : 13802205042
**   Website: http://www.tootzoe.com
**
**************************************************************************/



#ifdef Q_CC_MSVC
#pragma execution_character_set("UTF-8")
#endif


//------------------------------------------------------------------------

#include<QtWidgets>


#include "TFeatureAssetPackageTool.h"


TFeatureAssetPackageTool::TFeatureAssetPackageTool(QWidget *parent)
    : QWidget{parent}
{
    setWindowTitle(tr("Package tool for Feature Assets (Tested on [ UE-5.6.0 ~ UE-5.8.0 ] )"));


    resize(1000, 600);

   // QTimer::singleShot(0, this, &QWidget::raise);
}
