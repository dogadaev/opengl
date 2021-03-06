#pragma once

#include <GL/glew.h>

const GLuint VERTEX_POSITION_COMPONENT_COUNT = 3;
const GLuint VERTEX_COLOR_COMPONENT_COUNT = 4;
const GLuint VERTEX_TEXTURE_COORD_COMPONENT_COUNT = 2;
const GLuint VERTEX_TEXTURE_INDEX_COMPONENT_COUNT = 1;

struct Vertex
{
    GLfloat position[VERTEX_POSITION_COMPONENT_COUNT];
    GLfloat color[VERTEX_COLOR_COMPONENT_COUNT];
    GLfloat textureCoordinates[VERTEX_TEXTURE_COORD_COMPONENT_COUNT];
    GLuint textureIndex;
};