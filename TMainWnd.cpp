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
#include<QDebug>

#include "TMainWnd.h"

#include "TCommoBtn.h"
#include "TFeatureAssetPackageTool.h"
#include "TNormalMapGenerator.h"


TMainWnd::TMainWnd(QWidget *parent)
    : QWidget{parent}
{
    setWindowTitle(tr("Utilitie collection for Unreal Engine @ tootzoe.com (Tested on [ UE-5.6.0 ~ UE-5.8.0 ] )"));

    resize(1000 , 600);

    setupUI();

}

void TMainWnd::setupUI()
{
    QGridLayout *mainLO = new QGridLayout;

    QPalette pal = palette();
    pal.setColor(QPalette::ButtonText , Qt::yellow);
    setPalette(pal);
    //

    QStringList titleStrLs;   // this list and below list **MUST** have the same size
    QList<QWidget*> widgetLs;
    //
    titleStrLs <<  tr("Feature Assets Packaging Tool")
               << tr("Normal Map Generater")
                  ;



    TFeatureAssetPackageTool* toolWid = new  TFeatureAssetPackageTool( );
    widgetLs << qobject_cast<QWidget*> (toolWid);
    //
    TNormalMapGenerator* normalMapWid = new  TNormalMapGenerator( );
    widgetLs << qobject_cast<QWidget*> (normalMapWid);


    for (int it = 0; it < titleStrLs.size(); ++it) {
        TCommoBtn* tmpBtn = new TCommoBtn(titleStrLs.at(it));
        tmpBtn-> setPalette(pal);
        connect(tmpBtn, &QPushButton::clicked  ,    [& , widgetLs , it](){
            QWidget* wid = widgetLs.at(it);
           connect(this, &TMainWnd::closeMe , wid , & QWidget::close);
           wid->show();
           wid->raise();
        });

        mainLO->addWidget(tmpBtn, 0, it , 1, 1);

    }



    //
    //
    // TCommoBtn* normalMapBtn = new TCommoBtn(tr("Normal Map Generater"));
    // //NormalMapBtn-> setPalette(pal);
    // connect(normalMapBtn, &QPushButton::clicked  ,    [&](){
    //     TNormalMapGenerator* toolWid = new  TNormalMapGenerator( );
    //     connect(this, &TMainWnd::closeMe , toolWid, & TNormalMapGenerator::close);
    //     toolWid->show();
    // });

    // mainLO->addWidget(normalMapBtn, 0, 1 , 1, 1);





    setLayout(mainLO);

}









void TMainWnd::closeEvent(QCloseEvent *event)
{
    emit closeMe();
}
