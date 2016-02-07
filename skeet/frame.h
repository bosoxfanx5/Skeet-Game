//
//  frame.h
//  skeet
//
//  Created by Administrator on 2/6/16.
//  Copyright © 2016 BYU. All rights reserved.
//

#ifndef frame_h
#define frame_h

#include <stdio.h>
#include "rifle.h"
#include "pigeon.h"
#include "bullet.h"
#include "banner.h"


class Frame
{
   public:
      //Member Data
      Rifle rifles;
      Pigeon pigeons;
      Bullet bullets; // <= 5
      Banner banner;
      int frameRate = 30;
   
   private:
      //Member Functions
      void draw();
};

#endif /* frame_h */