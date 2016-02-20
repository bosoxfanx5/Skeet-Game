// 
//  main.cpp
//  skeet
//
//  Created by Administrator on 2/6/16.
//  Copyright © 2016 BYU. All rights reserved.
//

#include <iostream>
#include "frame.h"

/*************************************
 * All the interesting work happens here, when
 * I get called back from OpenGL to draw a frame.
 * When I am finished drawing, then the graphics
 * engine will wait until the proper amount of
 * time has passed and put the drawing on the screen.
 **************************************/
void callBack(const Frame *pFrame, void * p)
{
   /*
   Ball * pBall = (Ball *)p;  // cast the void pointer into a known type
   
   // move the polygon
   if (pFrame->isRight()) //keystrokes//
      pBall->pt.addX(1);  //change to gun//
   if (pFrame->isLeft())
      pBall->pt.addX(-1);
   if (pFrame->isUp())
      pBall->pt.addY(1);
   if (pFrame->isDown())
      pBall->pt.addY(-1);
   
   // use the space bar to change the number of sides.
   if (pFrame->isSpace())
      pBall->sides++;
   if (pBall->sides == 20)
      pBall->sides = 2;
   
   // rotate constantly
   pBall->rotation++;
   
   // draw
   drawPolygon(pBall->pt,      //position//
               20,             //radius  //
               pBall->sides    //segments//,
               pBall->rotation //rotation//);
   */
}

int main(int argc, const char * argv[])
{
   Frame mainFrame;
   
   // insert code here...
   std::cout << "Hello, World!\n";
    return 0;
   
   //Frame ourFrame(argc, argv, "Test", Point(-200, 200), Point(200, -200));    // initialize OpenGL
   Frame ourFrame();    // initialize OpenGL
   //Ball ball;                           // initialize the game state
   ourFrame.run(callBack, &ball);             // set everything into action
   
   return 0;
}
