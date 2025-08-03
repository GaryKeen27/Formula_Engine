#ifndef RESOURCE_RENDER_ACTIONS_H
#define RESOURCE_RENDER_ACTIONS_H

#ifdef TARGET_WINDOWS
#ifdef FE_EXPORT
#define FE_API __declspec(dllexport)
#else
#define FE_API __declspec(dllimport)
#endif //#ifdef FE_EXPORT
#else
#ifdef FE_EXPORT
#define FE_API __attribute__((__visibility__("default")))
#else
#define FE_API
#endif //#ifdef FE_EXPORT
#endif //#ifdef TARGET_WINDOWS

#include <vector>
#include <string>

#include "resource_shader.h"
#include "resource_image.h"
#include "resource_buffer.h"
#include "resource_sampler.h"
#include "resource_prefab.h"
#ifdef FEATURE_RAYTRACING
#include "resource_accelerationStructure.h"
#endif //#ifdef FEATURE_RAYTRACING

class FE_API FE_RenderAction
{
public:
    FE_RenderAction();
    ~FE_RenderAction();

    virtual void Destroy() = 0;

    struct Members;
    Members* members;
};

class FE_API FE_GraphicsAction : public FE_RenderAction
{
public:
    bool Create(const std::string& label, const uint32_t& outputWidth, const uint32_t& outputHeight, const std::vector<FE_Shader*>& shaders);
    void Destroy();
    bool Set(const std::vector<std::pair<std::string, FE_Uniform&>>& uniforms, const std::vector<FE_Prefab*>& prefabs);
};

class FE_API FE_ComputeAction : public FE_RenderAction
{
public:
    bool Create(const std::string& label, const uint32_t& groupCountX, const uint32_t& groupCountY, const uint32_t& groupCountZ, FE_Shader* shader);
    void Destroy();
    bool Set(const std::vector<std::pair<std::string, FE_Uniform&>>& uniforms);
};

#endif //#ifndef RESOURCE_RENDER_ACTIONS_H
