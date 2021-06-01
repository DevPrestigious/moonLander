#include "lander.h"
#include "uiDraw.h"

void Lander::applyGravity(float amount)
{
   // fun with Velocity
}

void Lander::applyThrustLeft()
{
   // if canThrust? add thrust to velocity

   // cosume fuel at this point
}

void Lander::applyThrustRight()
{
   // opposite of Left
}

void Lander::applyThrustBottom()
{
   // velocity fun
   // fuel fun
}

void Lander::advance()
{
   point.addX(1); // get direction from velocity
   point.addY(1); // get direction from velocity
}

bool Lander::canThrust()
{
   return (isAlive() && !isLanded() && fuel > 0);
}

void Lander::draw() const
{
   if (isAlive())
   {
      drawLander(point);
   }
}

