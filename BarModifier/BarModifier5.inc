[Lua]
Measure=Script
ScriptFile=#SKINSPATH#Droptop Community Apps\Apps\Theme_Me-Mike_Boynton\Scripts\ConvertHEXRGB.lua
Disabled=1

[CustomApp5]
MouseOverAction=["#SKINSPATH#Droptop Community Apps\Apps\Theme_Me-Mike_Boynton\Scripts\InformMe.exe" tooltip <Text="You are using #CurrentTheme#"\> <X=-1|(#CURRENTCONFIGX#+[#CURRENTSECTION#:X])|[#CURRENTSECTION#:W]\> <Y=-1|(#CURRENTCONFIGY#+[#CURRENTSECTION#:Y]*5)|[#CURRENTSECTION#:H]\> <Title="Theme Me"\> <Icon=file=#SKINSPATH#Droptop Community Apps\\Apps\\Theme_Me-Mike_Boynton\\icons\\Tooltip.ico\> <Option=3\> <Unique=1\> <FontColor=[Lua:ConvertToHex('#DropdownFontColor1#')]\> <BGColor=[Lua:ConvertToHex('#DropdownBGColor1#')]\> <Fade=10\> <BClose=0\>]
