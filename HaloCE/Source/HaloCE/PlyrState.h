// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HaloCECharacter.h"

enum class PLAYER_STATE_TYPE
{
	PLAYER_STATE_CROUCH = 0,
	PLAYER_STATE_JUMP,
	PLAYER_STATE_WALK
};

/**
 * 
 */
class HALOCE_API PlyrState
{
public:
	PlyrState();
	~PlyrState();

	virtual void Enter() = 0;

	virtual PLAYER_STATE_TYPE Update(AHaloCECharacter* _agent) = 0;

	virtual void Exit() = 0;
};