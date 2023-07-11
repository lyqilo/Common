@echo off

del /s /Q .\cpp\
del /s /Q .\cs\
del /s /Q .\rof\
@xlsx2rof.exe ./xlsx/Common/ ./xlsx/Server/ ./rof/Client/ ./rof/Server/ ./cs/ ./cpp/
@echo SUCCESS!
@pause