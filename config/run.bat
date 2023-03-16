@echo off

del /s /Q .\cpp\
del /s /Q .\cs\
del /s /Q .\rof\
@xlsx2rof.exe ./xlsx/ ./rof/ ./cs/ ./cpp/
@echo SUCCESS!
@pause