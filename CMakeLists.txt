cmake_minimum_required(VERSION 3.15)
project(cpp_graphics)
include_directories(/usr/local/include/eigen-3.3.7)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_FLAGS -pthread)

add_executable(cpp_graphics main.cpp Utils/TimeGeometry/TimeVector2.h Utils/TimeGeometry/TimeVector3.h Utils/TimeGeometry/TimeFunction.h Aspect/Color.h Utils/BaseGeometry/Vector3.cpp Utils/BaseGeometry/Vector3.h Utils/BaseGeometry/UnitVector3.h Utils/BaseGeometry/Vector2.h Utils/Geometry/Line.h Utils/Geometry/Basis.cpp Utils/Geometry/Basis.h Utils/Geometry/ReferenceFrame.h Utils/BaseGeometry/Values.h Entity.h Camera/Camera.cpp Camera/Camera.h Scene.cpp Scene.h Camera/SimpleCamera.cpp Camera/SimpleCamera.h Light/Light.h Object/Object.cpp Object/Object.h Surface/Surface.cpp Surface/Surface.h Surface/Sphere.cpp Surface/Sphere.h Object/Ball.h Aspect/Aspect.h Surface/Circle.cpp Surface/Circle.h Object/Object2D.h Surface/Polygon.h Object/Cube.h Surface/Square.h Light/SimpleLight.h Aspect/RGB.cpp Aspect/RGB.h Camera/RealCamera.cpp Camera/RealCamera.h Picture.h Renderer/Renderer.cpp Renderer/Renderer.h Surface/OpenCylinder.cpp Surface/OpenCylinder.h Object/Cylinder.h)