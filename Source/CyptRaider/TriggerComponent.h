// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "mover.h"
#include "TriggerComponent.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYPTRAIDER_API UTriggerComponent : public UBoxComponent
{
	GENERATED_BODY()

public:

	UTriggerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);

	UFUNCTION(BlueprintCallable)
	void SetMover(Umover* Mover);

private:
	UPROPERTY(EditAnywhere)
	FName AcceptableActorTag;

	Umover* Mover;

	AActor* GetAcceptableActor() const;
};
