#ifndef VULKAN_CONTEXT_H
#define VULKAN_CONTEXT_H

#include <vulkan/vulkan.h>

namespace vk {
class VulkanContext {
public:
    VulkanContext();

    ~VulkanContext();

    void InitContext();

    void DestroyContext();


private:
    VkInstance instance;
    VkPhysicalDevice physicalDevice;
    VkDevice device;

    void CreateInstance();
};

}

#endif // VULKAN_CONTEXT_H
