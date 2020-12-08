#version 450
uniform float time;
uniform vec3 lampPos;
in vec2 uv;
in vec3 nm;
in vec4 v_position;
layout(binding=0) uniform sampler2D tex;
out vec4 color;


in vec3 particule_color;
void main()
{
    vec3 pos = vec3(v_position.x,v_position.y,v_position.z);

    //vec3 lightPosition = vec3(10, 10, 10);
    vec3 lightPosition = lampPos;

    vec3 lightDirection = normalize(lightPosition - pos);
    vec3 normal = nm;

    float coeff = abs(dot(lightDirection, nm));

    color =  coeff * texture(tex, uv);
}