
#include "SceneBuilder.h"
#include "ShapeBuilder.h"
#include "meshes.h"

using namespace std;


void SceneBuilder::UBuildScene(vector<GLMesh>& scene)
{


    // seed the rand() function once
    srand(time(nullptr));

    // Candle Bottom
    GLMesh candle;
    candle.p = {
        1.0f,	1.0f,	1.0f,	1.0f,
        1.0f,	1.0f,	1.0f,
        0.0f,	1.0f,	0.0f,	0.0f,
        90.0f,	0.0f,	1.8f,	0.0f,
        0.0f,	0.0f,	0.0f,	1.0f,
        2.5f,	0.0f,	-0.6f,
        1.0f,	1.0f
    };
    candle.radius = 0.8f;
    candle.height = 1.5f;
    candle.number_of_sides = 60.0f;
    candle.texFilename = "resources\\textures\\glass3.jpg";
    ShapeBuilder::UBuildCandleBottom(candle);
    scene.push_back(candle);

    // Cube box (Watch box)
    GLMesh plan_gMesh02;
    plan_gMesh02.p = {
        1.0f, 1.0f, 1.0f, 1.0f,
            2.0f, 1.0f, 2.0f,
            0.0f, 1.0f, 0.0f, 0.0f,
            45.0f, 0.0f, 1.0f, 0.0f,
            0.0f, 0.0f, 0.0f, 1.0f,
            1.0f, 0.0f, 0.0f,
            1.0f, 1.0f
    };
    plan_gMesh02.texFilename = "resources\\textures\\woodgrain.jpg";
    ShapeBuilder::UBuildCube(plan_gMesh02);
    scene.push_back(plan_gMesh02);

    // Table
    GLMesh plan_gMesh01;
    plan_gMesh01.p = {
        1.0f, 1.0f, 1.0f, 1.0f,				// color r, g, b a
        4.0f, 2.0f, 4.0f,					// scale x, y, z
        0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
        45.0f, 0.0f, 1.0f, 0.0f,				// y amount of rotation, rotate x, y, z
        0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
        1.0f, 0.0f, 0.0f,					// translate x, y, z
        1.0f, 1.0f
    };
    plan_gMesh01.texFilename = "resources\\textures\\bone_texture.png";
    ShapeBuilder::UBuildPlane(plan_gMesh01);
    scene.push_back(plan_gMesh01);


}

