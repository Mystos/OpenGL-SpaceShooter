#pragma once
#include <glm/vec3.hpp>
#include <vector>
#include <OpenGL_Shooter.cpp>
using namespace std;

class Mesh
{
    public:
        // mesh data
        vector<Vertex>       vertices;
        vector<unsigned int> indices;
        vector<Texture>      textures;
        vector<Texture> textures_loaded;


        Mesh(vector<Vertex> vertices, vector<unsigned int> indices, vector<Texture> textures);
        void Draw();
        //void Draw(Shader& shader);
    private:
        //  render data
        unsigned int VAO, VBO, EBO;

        void setupMesh();

};

