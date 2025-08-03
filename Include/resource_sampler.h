#ifndef RESOURCE_SAMPLER_H
#define RESOURCE_SAMPLER_H

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

#include <string>

#include "resource_uniform.h"
#include "Utility/util_types.h"

class FE_API FE_Sampler : public FE_Uniform
{
public:
    FE_Sampler();
    ~FE_Sampler();

    bool Create(const std::string& label, const FE_ImageFilter& minFilter, const FE_ImageFilter& magFilter, const FE_ImageFilter& mipFilter, const FE_ImageAddress& addressMode, const float& anisotropy);
    void Destroy();

    struct Members;
    Members* members;
};

#endif //#ifndef RESOURCE_SAMPLER_H
