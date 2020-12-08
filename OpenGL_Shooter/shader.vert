#version 450
uniform float time;
uniform vec2 mousePos;
uniform mat4 trans;

in vec3 pos;
in vec2 vertexUV;
in vec3 normal;

out vec3 nm;
out vec2 uv;
out  vec4 v_position;
out vec3 particule_color;

void main()
{
    nm = normal;
    uv = vertexUV;
    gl_PointSize = 5;
    v_position = trans * vec4(pos,1.0);
    gl_Position = trans * vec4(pos,1.0);
    
    particule_color = vec3(1.0,0.,0.);
}