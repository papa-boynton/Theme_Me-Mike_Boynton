[Rainmeter]
Group=DroptopSuite | Tray | Folders | Submenus
LeftMouseDownAction=[]

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=0
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=1

[Variables]
CustomAppPosition=7

@IncludeCommunityAppSubMenuMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppSubMenuMeters.inc
;@IncludeControl=#SKINSPATH#Droptop\@Resources\GlobalVar\Control.inc
;@IncludeUserSettings=#GlobalVarLocation#UserSettings.inc
;@IncludeFolderSettings=#GlobalVarLocation#FolderSettings.inc
;@IncludeThemeOptions=#ThemesLocation##ThemeNum#Settings.inc
;@IncludeThemeDesign=#ThemesLocation##ThemeNum#.inc
;@IncludeThemeMeasures=#OtherFilesLocation#Themes\ThemeMeasures.inc
;@IncludeLanguage=#GlobalVarLocation#Languages\[#Language[#LanguageNum]].inc
;@IncludeSystemTraySubMenuMeters=#DroptopMetersLocation#SystemTraySubMenuMeters.inc
;@IncludeVariablesDefault=#CommunityAppsLocation#[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]\Variables\VariablesDefault.inc
;@IncludeVariables=#CommunityAppsLocation#[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]\Variables\Variables.inc

FolderNumber=4

DropdownMenuWidth=#DropdownSubMenuWidth#

CloseMenu=[!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

Action0=[#ItemAction[#*CURRENTSECTION*]]

;-----------------------------------------

[InfoStyle]
Text=[#ItemText[##CURRENTSECTION#]]
LeftMouseDownAction=#Action0#
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)

[IconStyle]
ImageName=#CURRENTPATH#Icons\#FolderNumber#\[##CURRENTSECTION#]Icon.png
W=#IconW#
H=#IconW#
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)

;-----------------------------------------

[1]
Meter=String
MeterStyle=InfoStyle
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)

[2]
Meter=String
MeterStyle=#DefaultMeterStyle#

[3]
Meter=String
MeterStyle=#DefaultMeterStyle#

[4]
Meter=String
MeterStyle=#DefaultMeterStyle#

[5]
Meter=String
MeterStyle=#DefaultMeterStyle#

[6]
Meter=String
MeterStyle=#DefaultMeterStyle#

[7]
Meter=String
MeterStyle=#DefaultMeterStyle#

[8]
Meter=String
MeterStyle=#DefaultMeterStyle#

[9]
Meter=String
MeterStyle=#DefaultMeterStyle#

[10]
Meter=String
MeterStyle=InfoStyle

;-----------------------------------------

[1Icon]
Meter=Image
MeterStyle=IconStyle
Y=[1:Y]

[2Icon]
Meter=Image
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[3Icon]
Meter=Image
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[4Icon]
Meter=Image
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[5Icon]
Meter=Image
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[6Icon]
Meter=Image
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[7Icon]
Meter=Image
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[8Icon]
Meter=Image
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[9Icon]
Meter=Image
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[10Icon]
Meter=Image
MeterStyle=IconStyle

;-----------------------------------------

[1Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[2Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[3Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[4Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[5Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[6Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[7Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[8Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[9Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[10Arrow]
Meter=Shape
MeterStyle=ArrowStyleB
