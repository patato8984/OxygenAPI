// Giperion February 2020
// [EUREKA] 3.13.0
// X-Ray Oxygen, Oxygen Team
#pragma once

class XRCORE_API xrStartMemLeakTrackScope
{
public:
	xrStartMemLeakTrackScope();
	~xrStartMemLeakTrackScope();
};

#if MEM_LEAK_DETECTION

struct xrMemLeakTracker_Private;

class xrMemLeakTracker
{
	friend class xrStartMemLeakTrackScope;
public:

	xrMemLeakTracker();
	~xrMemLeakTracker();

	void OnMemoryAllocated(void* memPtr);
	void OnMemoryReallocated(void* oldPtr, void* memPtr);
	void OnMemoryFreed(void* memPtr);

	void DumpLeakedMemory();

private:

	xrMemLeakTracker_Private* Private;

	xrCriticalSection openedPointersLock;

	// those variable are changing very very rare
	// so separate them from other by moving to different cache line, to prevent false sharing
	char CacheLinePadding[128 * 2];
	bool bEnabled = false; // should be enabled only by xrStartMemLeakTrackScope
};
#endif