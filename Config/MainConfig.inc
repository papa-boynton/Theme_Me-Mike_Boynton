;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=7

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc
@IncludeSupporter=#SKINSPATH#Droptop\@Resources\GlobalVar\Supporter.inc

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]

[IconStyle]

[ArrowStyleB]

[BoxStyle]

[TextStyle]

;-----------------------------------------

[1]
Meter=String
MeterStyle=#DefaultMeterStyle# | SlotTextStyle
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)

[2]
Meter=String
MeterStyle=#DefaultMeterStyle# | SlotTextStyle

[3]
Meter=String
MeterStyle=#DefaultMeterStyle# | SlotTextStyle

[4]
Meter=String
MeterStyle=#DefaultMeterStyle# | SlotTextStyle

[5]
Meter=String
MeterStyle=#DefaultMeterStyle# | SlotTextStyle

[6]
Meter=String
MeterStyle=#DefaultMeterStyle# | SlotTextStyle

[7]
Meter=String
MeterStyle=#DefaultMeterStyle# | SlotTextStyle

[8]
Meter=String
MeterStyle=#DefaultMeterStyle# | SlotTextStyle

[9]
Meter=String
MeterStyle=#DefaultMeterStyle#

[10]
Meter=String
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
Meter=Image
MeterStyle=IconStyle | SlotIconStyle
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#)

[2Icon]
Meter=Image
MeterStyle=IconStyle | SlotIconStyle

[3Icon]
Meter=Image
MeterStyle=IconStyle | SlotIconStyle

[4Icon]
Meter=Image
MeterStyle=IconStyle | SlotIconStyle

[5Icon]
Meter=Image
MeterStyle=IconStyle | SlotIconStyle

[6Icon]
Meter=Image
MeterStyle=IconStyle | SlotIconStyle

[7Icon]
Meter=Image
MeterStyle=IconStyle | SlotIconStyle

[8Icon]
Meter=Image
MeterStyle=IconStyle | SlotIconStyle

[9Icon]
Meter=Image
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[10Icon]
Meter=Image
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

;-----------------------------------------

[1Arrow]
MeterStyle=ArrowStyleB

[2Arrow]
MeterStyle=ArrowStyleB

[3Arrow]
MeterStyle=ArrowStyleB

[4Arrow]
MeterStyle=ArrowStyleB

[5Arrow]
MeterStyle=ArrowStyleB

[6Arrow]
MeterStyle=ArrowStyleB

[7Arrow]
MeterStyle=ArrowStyleB

[8Arrow]
MeterStyle=ArrowStyleB

[9Arrow]
MeterStyle=ArrowStyleB

[10Arrow]
MeterStyle=ArrowStyleB

;----------------------------------------------------

[Box1]
Meter=Shape
MeterStyle=BoxStyle
Y=[Background:H]

[Box2]
Meter=Shape
MeterStyle=BoxStyle

[Box3]
Meter=Shape
MeterStyle=BoxStyle

[Box4]
Meter=Shape
MeterStyle=BoxStyle

[Box5]
Meter=Shape
MeterStyle=BoxStyle

;-----------------------------------------

[DividerStyle]
Shape=#DividerShape#
Y=(#NumberOfItems#>[##CURRENTSECTION#]?([[##CURRENTSECTION#]:Y]+#DropdownItemHeight#+#DividerSpace#):0)
Hidden=(#NumberOfItems#>[##CURRENTSECTION#]?(([#DividerExists[##CURRENTSECTION#]]-1)*-1):1)
Container=AnimationContainer
DynamicVariables=1

[Divider1]
Meter=Shape
MeterStyle=DividerStyle

[Divider2]
Meter=Shape
MeterStyle=DividerStyle

[Divider3]
Meter=Shape
MeterStyle=DividerStyle

[Divider4]
Meter=Shape
MeterStyle=DividerStyle

[Divider5]
Meter=Shape
MeterStyle=DividerStyle

[Divider6]
Meter=Shape
MeterStyle=DividerStyle

[Divider7]
Meter=Shape
MeterStyle=DividerStyle

[Divider8]
Meter=Shape
MeterStyle=DividerStyle

[Divider9]
Meter=Shape
MeterStyle=DividerStyle
