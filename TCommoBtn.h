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



#ifndef TCOMMOBTN_H
#define TCOMMOBTN_H

#include <QPushButton>

class TCommoBtn : public QPushButton
{
public:
    TCommoBtn(const QString& btnTitle,  QWidget* parent = nullptr);



    // QWidget interface
public:
    virtual QSize sizeHint() const override;
};

#endif // TCOMMOBTN_H
