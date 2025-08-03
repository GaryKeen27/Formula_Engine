#ifndef RESOURCE_IMAGE_H
#define RESOURCE_IMAGE_H

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

#include <filesystem>
#include <string>

#include "resource_uniform.h"

class FE_API FE_ImageBase : public FE_Uniform
{
public:
    FE_ImageBase();
    ~FE_ImageBase();

    void Destroy();

    uint32_t GetNumMips();

    struct Members;
    Members* members;
};

//Note: These exist as filters to allow only certain types of resources in function arguments
class FE_API FE_Image2DBase : public FE_ImageBase {};
class FE_API FE_ImageCubeBase : public FE_ImageBase {};

class FE_API FE_Texture2D : public FE_Image2DBase
{
public:
    bool Create(const std::string& label, const std::filesystem::path& filePath, const bool& isSRGB);
};

class FE_API FE_Image2D : public FE_Image2DBase
{
public:
    bool Create(const std::string& label, const uint32_t& width, const uint32_t& height);
    bool Set(FE_Image2DBase& source, const uint32_t& dstMip);
};

class FE_API FE_StorageImage2D : public FE_Image2DBase
{
public:
    bool Create(const std::string& label, const uint32_t& width, const uint32_t& height);
};

class FE_API FE_ImageCube : public FE_ImageCubeBase
{
public:
    bool Create(const std::string& label, const uint32_t& width, const uint32_t& height);
    bool Set(FE_ImageCubeBase& source, const uint32_t& dstMip);
};

class FE_API FE_StorageImageCube : public FE_ImageCubeBase
{
public:
    bool Create(const std::string& label, const uint32_t& width, const uint32_t& height);
};

#endif //#ifndef RESOURCE_IMAGE_H
