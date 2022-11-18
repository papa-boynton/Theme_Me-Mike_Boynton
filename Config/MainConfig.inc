;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Group=[#CustomAppGroup[#CustomAppPosition]]
LeftMouseDownAction=[]

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=0
DefaultAutoSelectScreen=1

[Variables]
CustomAppPosition=1

@IncludeControl=#SKINSPATH#Droptop\@Resources\GlobalVar\Control.inc
@IncludeUserSettings=#GlobalVarLocation#UserSettings.inc
@Include99Settings=#ThemesLocation#99Settings.inc
@IncludeNumSettings=#ThemesLocation##ThemeNum#Settings.inc
@IncludeThemeDesign=#ThemesLocation##ThemeNum#.inc
@IncludeThemeMeasures=#OtherFilesLocation#Themes\ThemeMeasures.inc
@IncludeSystemTrayMeters=#DroptopMetersLocation#SystemTrayMeters.inc
@IncludeLanguage=#GlobalVarLocation#Languages\[#Language[#LanguageNum]].inc
@IncludeSupporter=#SKINSPATH#Droptop\@Resources\GlobalVar\Supporter.inc
@IncludeVariablesDefault=#CommunityAppsLocation#[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]\Variables\VariablesDefault.inc
@IncludeVariables=#CommunityAppsLocation#[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]\Variables\Variables.inc

Padding0=([#ItemIsFolder[#*CURRENTSECTION*]]=1?#DropdownItemPadding1#:(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#)),#DropdownItemPaddingY#,(#DropdownItemPadding2#+((10*#DroptopSize#)*#RTLText#)),(#DropdownItemPaddingY#*-1)
Padding1=#DropdownItemPadding2#,#DropdownItemPaddingY#,([#ItemIsFolder[#*CURRENTSECTION*]]=1?#DropdownItemPadding1#:(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#)),(#DropdownItemPaddingY#*-1)

NumberOfDividers=2

Box1=1
Box2=2
Box3=3
Box4=4
Box5=5

Box1Text=1
Box2Text=2
Box3Text=3
Box4Text=4
Box5Text=5

BoxPosition1=0
BoxPosition2=1
BoxPosition3=2
BoxPosition4=3
BoxPosition5=4

DropdownItemHL=#DropdownFontColor1#
DropdownFontColor2=#DropdownFontColor1#
HighlightShapeOpacity=100

[CurrentAppX]
Measure=Calc
Formula=[#CustomApp[#CustomAppPosition]X]
DynamicVariables=1
UpdateDivider=-1

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
InlinePattern=^#DefaultThemeText#
InlineSetting=Color | #DropdownFontColor1#,(#DropdownItemOpacity#/3)
InlinePattern2=#CRLF#Saved .*
InlineSetting2=Color | #DropdownFontColor1#,(#DropdownItemOpacity#/1.5)
InlinePattern3=#CRLF#Saved $
InlineSetting3=Color | #DropdownFontColor1#,0
Text=[#ItemText[##CURRENTSECTION#]]
LeftMouseDownAction=[#Action[#ItemIsFolder[##CURRENTSECTION#]]]
Padding=[#Padding[#RTLText]]
W=(#DropdownMenuWidth#+#SysAppMenuWOffset#-#DropdownItemPadding2#-#DropdownItemPadding1#+(#DropdownItemPadding1#*#HideIcons#)-((81*#DroptopSize#)*[#SavedThemeActive[#CURRENTSECTION]]))
MiddleMouseDownAction=[!SetVariable ThemeSlotNumber "[##CURRENTSECTION#]"][!UpdateMeasure "MeasureDeleteTheme"][!CommandMeasure MeasureDeleteTheme "Run"][!SetVariable SavedThemeName[#CURRENTSECTION] "#DefaultThemeText#"][!SetVariable SavedThemeAuthor[#CURRENTSECTION] ""][!SetVariable SavedThemeTime[#CURRENTSECTION] ""][!SetVariable SavedThemeActive[#CURRENTSECTION] "0"][!WriteKeyValue Variables SavedThemeName[#CURRENTSECTION] "#DefaultThemeText#" "#varkey#"][!WriteKeyValue Variables SavedThemeAuthor[#CURRENTSECTION] "" "#varkey#"][!SetOption [#CURRENTSECTION] Text "#DefaultThemeText#"][!WriteKeyValue Variables SavedThemeTime[#CURRENTSECTION] "" "#varkey#"][!WriteKeyValue Variables SavedThemeActive[#CURRENTSECTION] "0" "#varkey#"][!UpdateMeter *][!Redraw]

[IconStyle]
ImageName=#CURRENTPATH#Icons\[#Icon[#ItemIsFolder[##CURRENTSECTION#]]].png
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)

[ArrowStyleB]
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?([#ItemIsFolder[##CURRENTSECTION#]]=1?0:1):1)
Y=[[##CURRENTSECTION#]:Y]

[BoxStyle]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(3*#DroptopSize#)),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(([#BoxHeight[##CURRENTSECTION#]]*#DroptopSize#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#
X=#SysAppMenuXOffset#
Hidden=(#NumberOfBoxes#>=[##CURRENTSECTION#]?0:1)
Y=[Box[#BoxPosition[##CURRENTSECTION#]]:YH]

[TextStyle]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=[#FontName[#AltFont[#LanguageNum]]]
FontSize=#DropdownItemFontSize#
FontWeight=#FontWeight#
AntiAlias=#DropdownAntiAlias#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
W=(#DropdownMenuWidth#-([#CURRENTSECTION#:X]*2)+(#SysAppMenuXOffset#*2))
DynamicVariables=1
ClipString=1

[HighlightBackground]
Meter=Shape
Shape=Rectangle ((#DropdownMenuCutout#+#DropdownHLOffsetX#)+(3*#DroptopSize#)),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)-(6*#DroptopSize#)),#DropdownItemHeight#,(3*#DroptopSize#) | Fill Color #DropdownItemHL#,(#HighlightShapeOpacity#/6) | StrokeWidth 2 | StrokeColor #DropdownItemHL#,#HighlightShapeOpacity#
HighlightBackgroundGradient=180 | #DropdownItemHL#,(#HighlightShapeOpacity#/#HighlightShapeOpacityDivisor1B#) ; 0.4 | #DropdownItemHL#,0 ; 0.8 | #DropdownItemHL#,0 ; 1.0
X=1
Group=Highlight | HL
DynamicVariables=1
Hidden=1

;-----------------------------------------

[1]
Meter=String
MeterStyle=#DefaultMeterStyle#
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
MeterStyle=#DefaultMeterStyle#

[11]
Meter=String
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
Meter=Image
MeterStyle=IconStyle
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#)

[2Icon]
Meter=Image
MeterStyle=IconStyle

[3Icon]
Meter=Image
MeterStyle=IconStyle

[4Icon]
Meter=Image
MeterStyle=IconStyle

[5Icon]
Meter=Image
MeterStyle=IconStyle

[6Icon]
Meter=Image
MeterStyle=IconStyle

[7Icon]
Meter=Image
MeterStyle=IconStyle

[8Icon]
Meter=Image
MeterStyle=IconStyle

[9Icon]
Meter=Image
MeterStyle=IconStyle

[10Icon]
Meter=Image
MeterStyle=IconStyle

[11Icon]
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

[11Arrow]
Meter=Shape
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
