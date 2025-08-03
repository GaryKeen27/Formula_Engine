#ifndef RESOURCE_BUFFER_H
#define RESOURCE_BUFFER_H

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

#include <cstring>
#include <string>

#include "resource_uniform.h"

class FE_API FE_BufferBase : public FE_Uniform
{
public:
    FE_BufferBase();
    ~FE_BufferBase();

    void Destroy();

    template<typename DataType>
    bool Set(const DataType& data, const uint64_t& size, const uint64_t& sourceOffset, const uint64_t& destinationOffset)
    {
        return SetInternal(&data, size, sourceOffset, destinationOffset);
    }

    struct Members;
    Members* members;

private:
    bool SetInternal(const void* data, const uint64_t& size, const uint64_t& sourceOffset, const uint64_t& destinationOffset);
};

class FE_API FE_Buffer : public FE_BufferBase
{
public:
    bool Create(const std::string& label, const uint64_t& size);
};

class FE_API FE_StorageBuffer : public FE_BufferBase
{
public:
    bool Create(const std::string& label, const uint64_t& size);
};

#endif //#ifndef RESOURCE_BUFFER_H
