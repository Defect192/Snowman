
include "snow.inc"
include "colors.inc"
include "tree1.inc"
include "tree2.inc"
include "snowman.inc"

global_settings {
  assumed_gamma 1.0
  ambient_light rgb <0.50,0.50,0.70> //blue-gray hue to added to the snow
}

camera {
  location  <0.0, 0.0, -4.0>       //0.0 0.0 -4.0
  direction 1.5*z
  right     x*image_width/image_height
  look_at   <0.0, 0.0,  0.0>      //0.0 0.0 0.0
}

sky_sphere {
  pigment {
    gradient y
    color_map {
      [0.0 rgb <0.5,0.5,0.5>]     
      [0.7 rgb <1.0,1.0,1.0>]  
    }
  }
}
  

light_source {
  <0, 20, -10>       
  color rgb <1, 1, 1>
  translate <-30, 30, -30>
}



plane {
  y, -1
  texture { Snow2 }
}


height_field {
 tga "field-template.tga"
 smooth
 texture { Snow3 }
 translate <-.5, -.5, 50>
 scale <200, 70, 0>
} 


#declare name = merge{
  text {
    ttf "cyrvetic.ttf" "Emily Heaton" 0.5, 0
    texture { Ruby_Glass }
    translate -10*x
    translate y*5
    translate z*20      
  }
  text {
    ttf "cyrvetic.ttf" "Emily Heaton" 0.5, 0
    texture { NBwinebottle } 
    translate -10*x
    translate y*5.2
    translate z*20      
  }
}

//name delcared as an object

object { name }  

//foreground forest

object { tree1 rotate x*270 translate<-10,40,60> scale 0.15 }
object { tree1 rotate x*270 rotate y*30 translate<-18,40,40> scale 0.15 }
object { tree2 rotate x*270 translate<10,23,60> scale 0.15 }
object { tree2 rotate x*270 rotate y*-45 translate<25,23,50> scale 0.15 }
object { tree1 rotate x*270 rotate y*45 translate<15,38,15> scale 0.10 }
object { tree2 rotate x*270 rotate y*45 translate<-20,20,15> scale 0.10 }
object { tree2 rotate x*270 translate<9,25,8> scale 0.25 }
object { tree1 rotate x*270 rotate y*20 translate<-6,40,15> scale 0.20 }

//background forest

object { tree2 rotate x*270 rotate y*95 translate <-25,27,80> scale 0.45 }
object { tree2 rotate x*270 translate <-20,27,90> scale 0.45 }
object { tree2 rotate x*270 translate <-30,27,85> scale 0.45 }
object { tree2 rotate x*270 translate <-35,27,85> scale 0.45 }
object { tree2 rotate x*270 rotate y*30 translate <-60,27,85> scale 0.45 }
object { tree1 rotate x*270 translate<-10,42,130> scale 0.25 }
object { tree1 rotate x*270 translate<-35,42,140> scale 0.25 }
object { tree1 rotate x*270 rotate y*45 translate<-60,42,135> scale 0.25 }
object { tree1 rotate x*270 translate<-33,42,140> scale 0.25 }
object { tree1 rotate x*270 translate<-20,42,150> scale 0.25 }
object { tree2 rotate x*270 translate <30,27,85> scale 0.45 }
object { tree2 rotate x*270 translate <30,27,65> scale 0.45 }
object { tree1 rotate x*270 translate<25,42,130> scale 0.25 }
object { tree1 rotate x*270 rotate y*42 translate<33,42,130> scale 0.25 }
object { tree1 rotate x*270 rotate y*-90 translate<15,42,130> scale 0.25 }
object { tree1 rotate x*270 translate<17,42,125> scale 0.25 }
object { tree2 rotate x*270 rotate y*-34 translate <2,27,75> scale 0.45 }
object { tree2 rotate x*270 translate <4,27,65> scale 0.45 }
object { tree2 rotate x*270 rotate y*34 translate <5,27,77> scale 0.45 }


//moving object

object { snowman translate <0,-3.5,0> scale 0.25 }

