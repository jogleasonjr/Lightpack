/*
 * desktop.h
 *
 *  Created on: 30.01.2011
 *      Author: Mike Shatohin (brunql)
 *     Project: Lightpack
 *
 *  Lightpack is very simple implementation of the backlight for a laptop
 *
 *  Copyright (c) 2011 Mike Shatohin, mikeshatohin [at] gmail.com
 *
 *  Lightpack is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  Lightpack is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef DESKTOP_H
#define DESKTOP_H

#include <QObject>


class Desktop : public QObject
{
    Q_OBJECT
public:
    // Singleton
    static void Initialize(QObject *parent = 0);

private:
    Desktop(QObject *parent = 0);

public slots:
    void sizeChanged(int screen);

public:
    // This variables set in Desktop constructor and using in all over classes

    // Screen geometry
    static int Width;
    static int Height;

    // Screen geometry when init Desktop object
    static int InitWidth;
    static int InitHeight;


private:
    static Desktop *self;
};

#endif // DESKTOP_H