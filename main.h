//
// Created by mauri on 10/4/2021.
//

#ifndef LES1_MAIN_H
#define LES1_MAIN_H

#endif //LES1_MAIN_H


struct vec3D{
    float x,y,z;

    void minus(){

    };
};


vec3D minus(vec3D const &self);
vec3D add(vec3D const &self,vec3D const &other);
vec3D sub(vec3D const &self,vec3D const &other);
vec3D mul(vec3D const &self, float scalar);
vec3D div(vec3D const &self, float scalar);
vec3D unit(vec3D const &self);
vec3D cross(vec3D const &self,vec3D const &other);

float norm(vec3D const &self);
float dot(vec3D const &self,vec3D const &other);

void show();
void show(std::string label, vec3D const &self);
void show(std::string label, float scalar);