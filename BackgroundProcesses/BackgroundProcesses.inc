[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

[MeasureAutoThemeChange]
Measure=Time
Format=[#AutoChangeTime[#ThemeChangeNum]]
IfCondition=([&MeasureAutoThemeChange] <> [#PreviousAutoThemeChange])
;IfTrueAction=[!WriteKeyValue Variables PreviousAutoThemeChange [&MeasureAutoThemeChange] "#MyVariablesLoc#"][!SetVariable PreviousAutoThemeChange [&MeasureAutoThemeChange]][!EnableMeasure MeasureRandomTheme][!UpdateMeasure MeasureRandomTheme]
IfTrueAction=[!WriteKeyValue Variables PreviousAutoThemeChange [&MeasureAutoThemeChange] "#SKINSPATH#Droptop Community Apps\Apps\Theme_Me-Mike_Boynton\Variables\Variables.inc"][!SetVariable PreviousAutoThemeChange [&MeasureAutoThemeChange]][!EnableMeasure MeasureRandomTheme][!UpdateMeasure MeasureRandomTheme]
UpdateDivider=60
DynamicVariables=1
Disabled=#AutoThemeChangeOFF#

[MeasureRandomTheme]
Measure=Calc
Formula=(Random)
LowBound=1
HighBound=#hb#
UpdateRandom=1
UniqueRandom=1
IfCondition=MeasureRandomTheme = #ThemeNum#
IfTrueAction=#RefreshNotification#[!HideGroup Tray][!WriteKeyValue Variables ThemeNum "99" "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CurrentTheme [CustomThemeName] "#SKINSPATH#Droptop Community Apps\Apps\Theme_Me-Mike_Boynton\Variables\Variables.inc"][!CommandMeasure RunCommand.Taskkill "Run" "Droptop\DropdownBar"][!CommandMeasure RunCommand.Taskkill "Run" "Droptop\DropdownBar"][!Move #CURRENTCONFIGX# (#TopHeight#+#DropdownMenuYOffset#)][!Refresh *][!WriteKeyValue Variables ResetColor 1 "#SKINSPATH#Droptop\Other\BackgroundProcesses\Tasks\Chameleon.ini"][!WriteKeyValue Variables ReverseDarkLight 0 "#@#GlobalVar\UserSettings.inc"][;!ActivateConfig "Droptop Community Apps\Apps\Theme_Me-Mike_Boynton\ThemeChange" "ThemeChange.ini"][;!Show "Droptop Community Apps\Apps\Theme_Me-Mike_Boynton\ThemeChange"][!ActivateConfig "Droptop\Other\BackgroundProcesses\Tasks" "Chameleon.ini"][!Delay 3000][!UpdateMeasureGroup WorkareaMeasures]
IfFalseAction=#RefreshNotification#[!HideGroup Tray][!WriteKeyValue Variables ThemeNum [MeasureRandomTheme] "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CurrentTheme "[#ThemeName[MeasureRandomTheme]] Theme" "#SKINSPATH#Droptop Community Apps\Apps\Theme_Me-Mike_Boynton\Variables\Variables.inc"][!CommandMeasure RunCommand.Taskkill "Run" "Droptop\DropdownBar"][!CommandMeasure RunCommand.Taskkill "Run" "Droptop\DropdownBar"][!Move #CURRENTCONFIGX# (#TopHeight#+#DropdownMenuYOffset#)][!Refresh *][!WriteKeyValue Variables ResetColor 1 "#SKINSPATH#Droptop\Other\BackgroundProcesses\Tasks\Chameleon.ini"][!WriteKeyValue Variables ReverseDarkLight 0 "#@#GlobalVar\UserSettings.inc"][;!ActivateConfig "Droptop Community Apps\Apps\Theme_Me-Mike_Boynton\ThemeChange" "ThemeChange.ini"][;!Show "Droptop Community Apps\Apps\Theme_Me-Mike_Boynton\ThemeChange"][!ActivateConfig "Droptop\Other\BackgroundProcesses\Tasks" "Chameleon.ini"][!Delay 3000][!UpdateMeasureGroup WorkareaMeasures]
DynamicVariables=1
Disabled=1

[CustomThemeName]
Measure=String
String=#CustomThemeName# by #CustomThemeAuthor#
Substitute="My Custom Theme":"#ThemeName99#"