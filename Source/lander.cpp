#include "lander.h"
#include "uiDraw.h"

void Lander::applyGravity(float gravityAmount)
{
   // fun with Velocity
   velocity.setDy(velocity.getDy() - gravityAmount);
   velocity.advancePoint(point);
}

void Lander::applyThrustLeft()
{
   // if canThrust? add thrust to velocity
   if (canThrust())
   {
      velocity.setDx(velocity.getDx() + .1 );
      setFuel(fuel - 1);
   }
   
   // cosume fuel at this point
}

void Lander::applyThrustRight()
{
   // opposite of Left
   if (canThrust())
   {
      velocity.setDx(velocity.getDx() - .1);
      setFuel(fuel - 1);
   }
}

void Lander::applyThrustBottom()
{
   // velocity fun
   // fuel fun
   if (canThrust())
   {
      velocity.setDy(velocity.getDy() + .3);
      setFuel(fuel - 3);
   }
}

void Lander::advance()
{
   point.addX(0); // get direction from velocity
   point.addY(0); // get direction from velocity
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
