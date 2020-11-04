#include "FPS.h"

void FPS::startTime()
{
	QueryPerformanceFrequency(&timer);
	QueryPerformanceCounter(&start);
	//frame =	timer / 60;
}

void FPS::endTime()
{
	QueryPerformanceCounter(&end);

	DeltaTime = (end.QuadPart - start.QuadPart);
}

double FPS::getTime()
{
	return DeltaTime;
}

//double FPS::getFrame()
//{
//	return frame;
//}
