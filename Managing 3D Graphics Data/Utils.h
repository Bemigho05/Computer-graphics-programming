#pragma once
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <string>
#include <iostream>
#include <fstream>

class Utils
{
private:
	static void printShaderLog(GLuint shader);
	static void printProgramLog(int prog);
	static std::string readShaderSource(const char* filePath);
public:
	static bool checkOpenGLError();
	static GLuint createShaderProgram(const char* vp, const char* fp);
	static GLuint createShaderProgram(const char* vp, const char* gp, const char* fp);
	static GLuint createShaderProgram(const char* vp, const char* tCS, const char* tES, const char* fp);
	static GLuint createShaderProgram(const char* vp, const char* tCS, const char* tES, const char* gp, const char* fp);
};