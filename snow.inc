include "colors.inc"

#declare Snow = texture {
  pigment { color White }
  finish {
    diffuse 0.8
    specular 0.4
    ambient 0.5
  }
  normal{
    granite 0.1
    scale 0.5 
  } 
}


#declare Snow2 = texture {
  pigment { color White }
  finish {
    diffuse 0.8
    specular 0.4
    ambient 0.3
  }
  normal{
    granite 0.5
    scale 0.5 
  } 
}


#declare Snow3 = texture {
  pigment { color White }
  finish {
    diffuse 0.1
    specular 0.3
    ambient 0.2
  }
}