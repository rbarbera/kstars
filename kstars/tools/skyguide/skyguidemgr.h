/***************************************************************************
                          skyguidemgr.h  -  K Desktop Planetarium
                             -------------------
    begin                : 2015/05/06
    copyright            : (C) 2015 by Marcos Cardinot
    email                : mcardinot@gmail.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef SKYGUIDEMGR_H
#define SKYGUIDEMGR_H

#include <QQuickView>
#include <QWidget>

class SkyGuideMgr
{
public:

    SkyGuideMgr();

    virtual ~SkyGuideMgr();

    inline QWidget* getWindowContainer() { return m_container; }

private:

    QWidget* m_container;
    QQuickView* m_view;
};

#endif // SKYGUIDEMGR_H
