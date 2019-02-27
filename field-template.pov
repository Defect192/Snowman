include "colors.inc"

camera {
       location <0, 0, -10>
        look_at <0,0,0>
} 
 
 
plane { z, 10
        pigment {
                wrinkles
                color_map {
                        [0 0.3*White]
                        [1 White]
        }
        }
} 


light_source { <0, 20, -100> color White } 
