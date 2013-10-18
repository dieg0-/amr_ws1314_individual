#include "braitenberg_vehicle.h"

BraitenbergVehicle::BraitenbergVehicle()
: type_(TYPE_A)
, factor1_(1.0)
, factor2_(0.0)
{
}

BraitenbergVehicle::BraitenbergVehicle(Type type, float factor1, float factor2)
: type_(type)
, factor1_(factor1)
, factor2_(factor2)
{
}

void BraitenbergVehicle::computeWheelSpeeds(float left_in, float right_in, float& left_out, float& right_out)
{
  //==================== YOUR CODE HERE ====================
  // Instructions: based on the input from the left and
  //               right sonars compute the speeds of the
  //               wheels. Use the parameters stored in the
  //               private fields type_, factor1_, and
  //               factor2_ (if applicable).

   /**
     *   TYPE_A : Each motor directly dependant of the sonar on its side.
     *   TYPE_B : Each motor dependant of the sonar on the opposite side. 
     *   TYPE_C : Each motor depends on both sonars and factors.
     **/
   if(type_ == BraitenbergVehicle::Type::TYPE_A){
   	left_out = left_in*factor1_;
   	right_out = right_in*factor1_;
   }else if(type_ == BraitenbergVehicle::TYPE_B){
        left_out = right_in*factor1_;
        right_out = left_in*factor1_;
   }else if(type_ == BraitenbergVehicle::TYPE_C){
        left_out = left_in*factor1_ + (right_in*factor2_);
        right_out = right_in*factor1_ + (left_in*factor2_);
   }
  // =======================================================
}

