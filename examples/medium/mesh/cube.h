#pragma once
/*
std::vector<GLfloat> defaultCube = {
    -0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
     0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f,
     0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f,
    -0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f,
    -0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,

    -0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
     0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f,
     0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f,
    -0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f,
    -0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,

    -0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
    -0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f,
    -0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f,
    -0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f,
    -0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    -0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,

     0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
     0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f,
     0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f,
     0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f,
     0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
     0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,

    -0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f,
     0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f,
     0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
     0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
    -0.5f, -0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    -0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f,

    -0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f,
     0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f,
     0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
     0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
    -0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    -0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f
};
*/
/* Cube with normals */

std::vector<GLfloat> defaultCube = {
    -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
     0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
     0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
     0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
    -0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
    -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,

    -0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,
     0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,
     0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,
     0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,
    -0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,
    -0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,

    -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,
    -0.5f,  0.5f, -0.5f, -1.0f,  0.0f,  0.0f,
    -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,
    -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,
    -0.5f, -0.5f,  0.5f, -1.0f,  0.0f,  0.0f,
    -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,

     0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,
     0.5f,  0.5f, -0.5f,  1.0f,  0.0f,  0.0f,
     0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,
     0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,
     0.5f, -0.5f,  0.5f,  1.0f,  0.0f,  0.0f,
     0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,

    -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,
     0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,
     0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,
     0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,
    -0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,

    -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,
     0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,
     0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,
     0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,
    -0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,
    -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f
};