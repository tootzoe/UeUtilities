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



#ifndef TMAINWND_H
#define TMAINWND_H

#include <QWidget>

class TMainWnd : public QWidget
{
    Q_OBJECT
public:
    explicit TMainWnd(QWidget *parent = nullptr);

signals:
    void closeMe();

public:



    // QWidget interface
protected:
    virtual void closeEvent(QCloseEvent *event) override;
private:

    void setupUI();





};

#endif // TMAINWND_H
