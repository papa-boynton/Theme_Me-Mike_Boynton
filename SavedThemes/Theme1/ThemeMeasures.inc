; Retrieves wallpaper file path
[sWallpaper]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop
RegValue=Wallpaper
DynamicVariables=1
OnChangeAction=[!UpdateMeasure "sAccentColor"][!Delay 1000][!UpdateMeasure "sTextColor"][!Delay 1000][!UpdateMeasure "sHiLightColor"][!Delay 1000][!Delay 2000][!RefreshGroup MainFolders][!Delay 2000][!Refresh "Droptop\DropdownBar"]

; Get Current Background Color
[sAccentColor]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\Microsoft\Windows\DWM
RegValue=AccentColor
DynamicVariables=1
OnChangeAction=[!UpdateMeasure "sTextColor"][!Delay 1000][!UpdateMeasure "sHiLightColor"]

; Convert from hexadecimal to decimal, thanks to nek for code
[sRed]
Measure=Calc
Formula=sAccentColor&0xFF
DynamicVariables=1

; Convert from hexadecimal to decimal, thanks to nek for code
[sGreen]
Measure=Calc
Formula=(sAccentColor>>8)&0xFF
DynamicVariables=1

; Convert from hexadecimal to decimal, thanks to nek for code
[sBlue]
Measure=Calc
Formula=(sAccentColor>>16)&0xFF
DynamicVariables=1

; Convert from hexadecimal to decimal, thanks to nek for code
[sAlpha]
Measure=Calc
Formula=(sAccentColor>>24)&0xFF
DynamicVariables=1

; Put color codes together and write to this file
[sColors]
Measure=String
String=[sRed:],[sGreen:],[sBlue:],[sAlpha:]
DynamicVariables=1
OnChangeAction=[!WriteKeyValue Variables TopBarBGColor1  [sColors] "#@#Themes\99Settings.inc"][!WriteKeyValue Variables TopBarBGColor2  [sColors] "#@#Themes\99Settings.inc"][!WriteKeyValue Variables TopBarBGColor3  [sColors] "#@#Themes\99Settings.inc"][!WriteKeyValue Variables DropdownBGColor1  [sColors] "#@#Themes\99Settings.inc"][!Delay 2000][!RefreshGroup MainFolders][!Delay 2000][!Refresh "Droptop\DropdownBar"]

; Get Current Text Color
[sTextColor]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Colors
RegValue=ActiveTitle
Substitute=" ":","
DynamicVariables=1
;OnChangeAction=[!WriteKeyValue Variables TopBarFontColor1 [sTextColor] "#@#Themes\99Settings.inc"][!WriteKeyValue Variables TopBarFontColor2 [sTextColor] "#@#Themes\99Settings.inc"][!WriteKeyValue Variables DropdownFontColor1 [sTextColor] "#@#Themes\99Settings.inc"][!WriteKeyValue Variables DropdownFontColor2 [sTextColor] "#@#Themes\99Settings.inc"][!Delay 2000][!RefreshGroup MainFolders][!Delay 2000][!Refresh "Droptop\DropdownBar"]
OnChangeAction=[!WriteKeyValue Variables TopBarFontColor1 [sTextColor] "#@#Themes\99Settings.inc"][!WriteKeyValue Variables TopBarFontColor2 [sTextColor] "#@#Themes\99Settings.inc"][!WriteKeyValue Variables DropdownFontColor1 [sTextColor] "#@#Themes\99Settings.inc"][!WriteKeyValue Variables DropdownFontColor2 [sTextColor] "#@#Themes\99Settings.inc"][!Delay 2000][!RefreshGroup MainFolders][!Delay 2000][!SetVariableGroup DroptopSuite TopBarFontColor1 [sTextColor]][!Delay 2000][!UpdateGroup DroptopSuite]

; Get Current Highlight Color
[sHiLightColor]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Colors
RegValue=Hilight
Substitute=" ":","
DynamicVariables=1
OnChangeAction=[!WriteKeyValue Variables TopBarHLColor1  [sHiLightColor] "#@#Themes\99Settings.inc"][!WriteKeyValue Variables DropdownItemHL  [sHiLightColor] "#@#Themes\99Settings.inc"][!Delay 2000][!RefreshGroup MainFolders][!Delay 2000][!Refresh "Droptop\DropdownBar"]

;[sTaskbarHeight]
;Measure=Registry
;RegHKey=HKEY_CURRENT_USER
;RegKey=Software\Microsoft\Windows\CurrentVersion\Explorer\Advanced
;RegValue=TaskbarSi
;;Substitute="0":"32","1":"48","2":"72"
;UpdateRate=-1
;;DynamicVariables=1