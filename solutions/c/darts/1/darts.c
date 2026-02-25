#include "darts.h"

uint8_t score(coordinate_t landing_position){
    
    double x = landing_position.x;
    double y = landing_position.y;
    
    double distance = sqrt((x*x) + (y*y));

    if(distance > 10)
        return 0;
    else if(distance > 5 )
        return 1;
    else if (distance > 1)
        return 5;
    else 
        return 10;
}