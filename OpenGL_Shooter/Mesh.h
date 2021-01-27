#pragma once
#include <glm/vec3.hpp>
#include <vector>
#include <OpenGL_Shooter.cpp>
using namespace std;

struct Vertex {
    // position
    glm::vec3 Position;
    // normal
    glm::vec3 Normal;
    // texCoords
    glm::vec2 TexCoords;
    // tangent
    glm::vec3 Tangent;
    // bitangent
    glm::vec3 Bitangent;
};

struct Texture {
    unsigned int id;
    string type;
    string path;
};

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

