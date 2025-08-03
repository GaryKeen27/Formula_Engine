#ifndef RESOURCE_UNIFORM_H
#define RESOURCE_UNIFORM_H

/*
 * FE_Uniform provides an empty parent class for objects that are intended to be shader uniform data such as FE_Image and FE_Buffer.
 * This exists to allow these wildly different class types to be used in a singular std::vector at the FE_RenderAction.Set() function.
 * The class below is an abstract class to prevent the user from creating it directly.
 * It has no implementation, therefore using the Destructor as a pure virtual and defining its implementation outside of the class to achieve its abstract status.
 * C++ does not support pure virtual Constructors, hence using the Destructor instead. This achieves the same effect.
 */

class FE_Uniform
{
public:
    virtual ~FE_Uniform() = 0;
};

#endif //#ifndef RESOURCE_UNIFORM_H
