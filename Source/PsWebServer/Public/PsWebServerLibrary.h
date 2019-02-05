// Copyright 2015-2019 Mail.Ru Group. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "PsWebServerLibrary.generated.h"

class UPsCivetWebServer;

UCLASS()
class UPsWebServerLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PsWebServer")
	static UPsCivetWebServer* GetWebServer();
};
