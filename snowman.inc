include "colors.inc"
include "woods.inc"
include "textures.inc"
include "stones1.inc"
include "snow.inc"

//background{Gray}
//camera {
//location <-2, 4, -5>
//look_at <0, 0, 0> 
//}
//light_source { <20, 20, -20> color White }
//light_source { <20, 20, 20> color White }
//light_source { <-20, 20, -20> color White }


#declare bodyColor = Snow;
#declare armColor = DMFLightOak;
#declare noseColor = Orange;
#declare hatColor = Black;
#declare trimColor = Blue;
#declare stoneColor = T_Stone10;

#declare X = 0;
#declare Y = 0;
#declare Z = 0;

#declare rightPalm = 0;
#declare leftPalm = 0;

#declare snowman = union {
 
 
//-----------------------body
 
sphere{ //bottom
<X,Y,Z>, 1.15
texture { bodyColor }
} 
sphere{ //middle
<X,Y+1,Z>, 0.85
texture { bodyColor }
}  
sphere{ //top
<X,Y+1.90,Z>, 0.55
texture { bodyColor }
}

//-----------------------arms


cone{ //arm 1 (left facing me)
<X+2,Y+1.5,Z>, 0.06
<X,Y+1,Z>, 0.05
texture{ armColor }
}

difference { //finger 1 (arm 1)
cone{ 
<X+1.60,Y+1.40,Z>, 0.04
<X+1.85,Y+1.20,Z>, 0.04
texture{ armColor }
}
box {
<X+2,Y+1.35,Z-0.05>,
<X+1.80,Y+0.85,Z+0.05>
texture{ armColor }
}
}

difference{ //finger 2 (arm 1)
cone{
<X+1.70,Y+1.40,Z>, 0.04
<X+1.90,Y+1.80,Z>, 0.04
texture{ armColor }
}
box{
<X+1.80,Y+1.90,Z-0.05>,
<X+2,Y+1.75,Z+0.05>
texture{ armColor }
}
}

difference{ //finger 3 (arm 1)
cone{
<X+1.50,Y+1.35,Z>, 0.04
<X+1.60,Y+1.65,Z-0.20>, 0.04
texture{ armColor }
}
box{
<X+1.50,Y+1.70,Z-0.10>,
<X+1.70,Y+1.60,Z-0.25>
texture{ armColor }
}
}


cone{ //arm 2 (right facing two)
<X-2,Y+1.5,Z>, 0.06
<X,Y+1,Z>, 0.05
texture{ armColor }
}

difference { //finger 1 (arm 2)
cone{ 
<X-1.60,Y+1.40,Z>, 0.04
<X-1.85,Y+1.20,Z>, 0.04
texture{ armColor }
}
box {
<X-2,Y+1.35,Z-0.05>,
<X-1.80,Y+0.85,Z+0.05>
texture{ armColor }
}
}

difference{ //finger 2 (arm 2)
cone{
<X-1.70,Y+1.40,Z>, 0.04
<X-1.90,Y+1.80,Z>, 0.04
texture{ armColor }
}
box{
<X-1.80,Y+1.90,Z-0.05>,
<X-2,Y+1.75,Z+0.05>
texture{ armColor }
}
}


difference{ //finger 3 (arm 2)
cone{
<X-1.50,Y+1.35,Z>, 0.04
<X-1.60,Y+1.65,Z-0.20>, 0.04
texture{ armColor }
}
box{
<X-1.50,Y+1.70,Z-0.10>,
<X-1.70,Y+1.60,Z-0.25>
texture{ armColor }
}
} 

//---------------------------------------eyes

sphere{  //right eye
<X-0.25,Y+2.10,Z-0.40>, 0.10
texture { stoneColor }
}   

sphere{  //left eye
<X+0.25,Y+2.10,Z-0.40>, 0.10
texture { stoneColor}
}   


//---------------------------------------stones 

sphere{ // middle-top
<X,Y+1.5,Z-0.60>, 0.15
texture { stoneColor }
}

sphere{ //middle-bottom
<X,Y+1.20,Z-0.75>, 0.15
texture { stoneColor }
}

sphere{  //bottom-top 
<X,Y+0.55,Z-0.95> 0.15
texture { stoneColor } 
}

sphere{ //bottom-middle
<X,Y+0.25,Z-1.06> 0.15
texture { stoneColor }
}


sphere{ //bottom-bottom
<X,Y-0.10,Z-1.08> 0.15
texture { stoneColor }
}

//---------------------------------------nose

cone{
 <X,Y+1.90,Z-0.50>, 0.10
 <X,Y+1.90,Z-0.90>,   0.001
 pigment { noseColor }
}

//---------------------------------------hat


cone{ //rim
<X,Y+2.30,Z>, 0.45 
<X,Y+2.45,Z>, 0.45
pigment { hatColor }
}

cone{ //trim
<X,Y+2.45,Z>, 0.36 
<X,Y+2.61,Z>, 0.36
pigment { trimColor }
}

cone{ //top
<X,Y+2.60,Z>, 0.36
<X,Y+2.90,Z>, 0.45
pigment { hatColor }
}




}


//object {snowman}




