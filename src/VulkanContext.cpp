#include "VulkanContext.h"
#include <iostream>

namespace vk
{

    VulkanContext::VulkanContext() {}

    VulkanContext::~VulkanContext() {}

void VulkanContext::InitContext()
{
    CreateInstance();
}

void VulkanContext::DestroyContext()
{

}

void VulkanContext::CreateInstance()
{
    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Vulkan backend";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 2, 0);
    appInfo.pEngineName = "No engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 2, 0);
    appInfo.apiVersion = VK_API_VERSION_1_2;

    VkInstanceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;

    uint32_t apiVersio = 111111111;
    VkResult ret = vkEnumerateInstanceVersion(&apiVersio);

    std::cout << "support VK_API_VERSION_1_1 :" <<ret << std::endl; 

    //vkEnumerateInstanceExtensionProperties()
}

} // namespace vk
