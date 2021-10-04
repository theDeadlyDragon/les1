#include <iostream>
#include <cmath>
#include "main.h"


vec3D minus(vec3D const &self){
    vec3D temp;
    temp.x = 0-self.x;
    temp.y = 0-self.y;
    temp.z = 0-self.z;

    return temp;
}

vec3D add(vec3D const &self,vec3D const &other){
    vec3D temp;
    temp.x = self.x + other.x;
    temp.y = self.y + other.y;
    temp.z = self.z + other.z;

    return temp;
}

vec3D sub(vec3D const &self,vec3D const &other){
    vec3D temp;
    temp.x = self.x - other.x;
    temp.y = self.y - other.y;
    temp.z = self.z - other.z;

    //is value is negative get postive number
    if(temp.x<0)
        temp.x *= -1;
    if(temp.y<0)
        temp.y *= -1;
    if(temp.z<0)
        temp.z *= -1;

    return temp;
}

vec3D mul(vec3D const &self, float scalar){
    vec3D temp;
    temp.x = self.x * scalar;
    temp.y = self.y * scalar;
    temp.z = self.z * scalar;

    return temp;
}

vec3D div(vec3D const &self, float scalar){
    vec3D temp;
    temp.x = self.x / scalar;
    temp.y = self.y / scalar;
    temp.z = self.z / scalar;

    return temp;
}

vec3D unit(vec3D const &self){
    float temp = norm(self);

    vec3D vecTemp = div(self,temp);

    return vecTemp;
}

vec3D cross(vec3D const &self,vec3D const &other){
    vec3D tempVec;
    tempVec.x = self.y*other.z - self.z * other.y;
    tempVec.y = self.z*other.x - self.x * other.z;
    tempVec.z = self.x*other.y - self.y * other.x;

    return tempVec;
}

float dot(vec3D const &self,vec3D const &other){

    float temp = self.x*other.x + self.y*other.y + self.z*other.z;

    return temp;
}

float norm(vec3D const &self){
    float temp  = sqrt(pow(self.x,2)+pow(self.y,2)+pow(self.z,2));

    return temp;
}

void show(){
    std::cout << std::endl;
}
void show(std::string label, vec3D const &self){

    /*
    if(label == "x")
        std::cout << "value of x is: " << self.x << std::endl;
    else if(label == "y")
        std::cout << "value of y is: " << self.y << std::endl;
    else if(label == "z")
        std::cout << "value of z is: " << self.z << std::endl;
    */

    std::cout << label << " has an x,y,z value of :" << self.x << "," << self.y << "," << self.z <<std::endl;



};
void show(std::string label, float scalar){
    std::cout << "the scalar of " << label << "is " << scalar << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    vec3D vector{1,-7,1};
    vec3D vector1{5,2,4};
    vec3D vector2{1,2,3};

    vector2 = cross(vector, vector1);
    show("vector2", vector2);


    return 0;
}
