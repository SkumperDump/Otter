// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterThruster.h"
#include "NiagaraComponent.h"

AOtterThruster::AOtterThruster()
{
    Exhaust = CreateDefaultSubobject<UNiagaraComponent>(FName("Exhaust"));
    Exhaust->SetupAttachment(GetRootComponent());
}




