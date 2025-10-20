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

#include "TNormalMapGenerator.h"


TNormalMapGenerator::TNormalMapGenerator(QWidget *parent)
    : QWidget{parent}
{

    setWindowTitle(tr("Normal Map Generater from https://github.com/Theverat/NormalmapGenerator"));


    resize(1000, 600);

}
