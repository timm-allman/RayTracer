// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the RAYTRACER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// RAYTRACER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef RAYTRACER_EXPORTS
#define RAYTRACER_API __declspec(dllexport)
#else
#define RAYTRACER_API __declspec(dllimport)
#endif

#include <string>

// This class is exported from the RayTracer.dll
class RAYTRACER_API CRayTracer {
public:
	CRayTracer(void);
	CRayTracer (std::string, int width, int height);
	// TODO: add your methods here.
	int width, height;
	std::string kernel_file;
	void raytrace (float *verts, int verts_len, float *norms, int norms_len, int *faces, int faces_len, float *mats, int mats_len);
};

extern RAYTRACER_API int nRayTracer;

RAYTRACER_API int fnRayTracer(void);