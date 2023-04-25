@echo off

del /s /Q .\cpp\
del /s /Q .\cs\
del /s /Q .\rof\
@xlsx2rof.exe ./xlsx/Common/ ./xlsx/Server/ ./rof/Client/ ./rof/Server/ ./cs/ ./cpp/

del /s /Q ..\..\Server\fishgame\Config\Game\
del /s /Q ..\..\Server\fishgame\Config\Rof\

xcopy .\cpp\ ..\..\Server\fishgame\Config\Game\ /s /e /y
xcopy .\rof\Server\ ..\..\Server\fishgame\Config\Rof\ /s /e /y

@echo SUCCESS!
@pause