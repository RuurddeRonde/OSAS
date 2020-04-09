workspace "OSAS"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release"
	}
	
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

IncludeDir = {}
IncludeDir["GLFW"] = "OSAS/vendor/GLFW/include"
IncludeDir["GLAD"] = "OSAS/vendor/GLAD"
IncludeDir["glm"] = "OSAS/vendor/glm"
IncludeDir["ImGui"] = "OSAS/vendor/imgui"

group "Dependencies"
	include "OSAS/vendor/GLFW"
	include "OSAS/vendor/GLAD"
	include "OSAS/vendor/imgui"

project "OSAS"
	location "OSAS"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files 
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/vendor/glm/glm/**.hpp",
		"%{prj.name}/vendor/glm/glm/**.inl",
	}

	includedirs
	{
		"%{prj.name}/vendor/src",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.GLAD}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGui}"	
	}
	links 
	{ 
		"GLFW",
		"GLAD",
		"ImGui",
		"opengl32.lib"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

	filter "configurations:Debug"
		defines "OSAS_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "OSAS_RELEASE"
		optimize "On"