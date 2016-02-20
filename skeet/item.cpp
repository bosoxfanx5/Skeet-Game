//
//  item.cpp
//  skeet
//
//  Created by Administrator on 2/6/16.
//  Copyright © 2016 BYU. All rights reserved.
//

#include "item.h"

//void draw()
//{
//
//}

void move(Point & newLocation)
{
   this.location.setX = newLocation.getX();
   this.location.setY = newLocation.getY();
}

void turn(int newOrientation)
{
   this.orientation = newOrientation;
}