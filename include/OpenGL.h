
//////////////////////////////////////////////////
/// Simplifies the include needed to use OpenGL
//////////////////////////////////////////////////

// Used by the gl.h used by VC++
#if defined(_WIN32) && defined(_MSC_VER)
    #include <Windows.h>
#endif

#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#include <gl/GL.h>
#include <gl/GLU.h>
#endif