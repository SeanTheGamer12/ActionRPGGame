#pragma once
#include "../GAGlobalTypes.h"
#include "GABlueprintLibrary.generated.h"

UCLASS(BlueprintType, Blueprintable)
class GAMEATTRIBUTES_API UGABlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Game Effect System")
		static FGAEffectHandle ApplyEffectSpec(const FHitResult& Target, APawn* Instigator,
		UObject* Causer, TSubclassOf<class UGAEffectSpecification> SpecIn);

	UFUNCTION(BlueprintCallable, Category = "Game Effect System")
		static FGAEffectHandle ApplyEffectActorSpec(AActor* Target, APawn* Instigator,
		UObject* Causer, TSubclassOf<class UGAEffectSpecification> SpecIn);

	UFUNCTION(BlueprintCallable, Category = "Game Effect System")
		static void OverrideEffectDuration(TSubclassOf<class UGAEffectSpecification> SpecIn);

	/*
		Override all attribute modifiers in spec.
	*/
	UFUNCTION(BlueprintCallable, Category = "Game Effect System")
		static void OverrideEffectModifiers(TSubclassOf<class UGAEffectSpecification> SpecIn,
		TArray<FGAAttributeModifier> ModifiersIn);

	/*
		Will override one specific modifier in spec.
	*/
	UFUNCTION(BlueprintCallable, Category = "Game Effect System")
		static void OverrideEffectModifier(TSubclassOf<class UGAEffectSpecification> SpecIn,
		TArray<FGAModifierOverride> OverridesIn);


};
