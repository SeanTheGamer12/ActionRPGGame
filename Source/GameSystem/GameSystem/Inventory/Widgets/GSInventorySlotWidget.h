#pragma once
#include "Blueprint/UserWidget.h"
#include "Widgets/GISSlotBaseWidget.h"
#include "GSInventorySlotWidget.generated.h"

UCLASS()
class GAMESYSTEM_API UGSInventorySlotWidget : public UGISSlotBaseWidget
{
	GENERATED_UCLASS_BODY()
public:
	//FEventReply OnMouseButtonDown_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) override;

	//void OnDragDetected_Implementation(FGeometry MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation*& Operation) override;

	bool OnDrop_Implementation(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation) override;
};
