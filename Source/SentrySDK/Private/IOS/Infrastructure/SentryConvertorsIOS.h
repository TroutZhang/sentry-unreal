// Copyright (c) 2022 Sentry. All Rights Reserved.

#pragma once

#include "SentryDataTypes.h"

#import <Sentry/Sentry.h>

class USentryScope;
class USentryId;

class SentryConvertorsIOS
{
public:
	/** Conversions to native iOS types */
	static SentryLevel SentryLevelToNative(ESentryLevel level);
	static NSDictionary* StringMapToNative(const TMap<FString, FString>& map);
	static NSArray* StringArrayToNative(const TArray<FString>& array);

	/** Conversions from native iOS types */
	static USentryScope* SentryScopeToUnreal(SentryScope* scope);
	static USentryId* SentryIdToUnreal(SentryId* id);
};
