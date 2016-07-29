// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "PathTracerPrivatePCH.h"

#include "MyPathTracerObject.h"



class FPathTracer : public IPathTracer
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FPathTracer, PathTracer )



void FPathTracer::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FPathTracer::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



