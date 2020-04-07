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

group "Dependencies"
	include "OSAS/vendor/GLFW"

project "OSAS"
	location "OSAS"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files 
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/vendor/src",
		"%{IncludeDir.GLFW}"
	}
	links 
	{ 
		"GLFW",
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