#include "FPS.h"

void FPS::startFPS()
{
	QueryPerformanceFrequency(&timer);
	QueryPerformanceCounter(&start);
}

void FPS::endFPS()
{
	QueryPerformanceCounter(&end);

	DeltaTime = (start.QuadPart - end.QuadPart);
}

float FPS::getFPS()
{
	return DeltaTime;
}
