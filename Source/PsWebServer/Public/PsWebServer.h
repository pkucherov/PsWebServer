// Copyright 2015-2019 Mail.Ru Group. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class UPsCivetWebServer;

class FPsWebServerModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline FPsWebServerModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FPsWebServerModule>("PsWebServer");
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("PsWebServer");
	}

public:
	/** Civet web server UE4 wrapper handler */
	UPsCivetWebServer* WebServer;
};
