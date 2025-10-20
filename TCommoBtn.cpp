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



#include "TCommoBtn.h"


TCommoBtn::TCommoBtn(const QString &btnTitle, QWidget *parent) : QPushButton(btnTitle, parent)
{

    QFont fn = font();
    fn.setBold(true);
    fn.setPixelSize(14);
    setFont(fn);

    // QPalette pal = palette();
    // pal.setColor(QPalette::ButtonText , Qt::yellow);
    // setPalette(pal);
}


QSize TCommoBtn::sizeHint() const
{
    return QSize(240 , 64);
}
