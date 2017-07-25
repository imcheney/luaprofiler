This is the renewal and extended version of the old luaprofiler project.

##Installation of luaprofiler
to install luaprofiler:

Windows: 
use Windows-VS2017BuildGuide.rtf

MacOS:
presumably, you should have both lua5.1 and luac5.1 softlink in /usr/local/bin/ (you can easily install lua5.1 by homebrew)
then, check and set config.darwin, 
rename "Makefile.darwin" to "Makefile",
use Terminal to run "make" command,
and you will find profiler.so in /usr/local/lib/lua/5.1/

Linux:
I have not yet personally test its installation yet, but it should be similar to that of MacOS.

##File Structure
VisualStudio2017:
luaprofiler.sln, luaprofiler.vcxproj, luaprofiler.vcxproj.filters, luaprofiler.vcxproj.user

luaprofiler:
clock.h/c, core_profiler.h/c, function_meter.h/c, lua50_profiler.c, luaprofiler.h, stack.h/c

lua5.1:
all others(e.g. lua.h/c...)

=========================================================================
-------------------------old README file content-------------------------
LuaProfiler
http://www.keplerproject.org/luaprofiler

LuaProfiler is a time profiler designed to help finding bottlenecks on your Lua program.

If you use LuaProfiler into your program, it will generate a log of all your function calls
and their respective running times. You can use this log to generate a summary of the
functions your program uses, along with how long it stayed in each of them, or you can
import the log into a spreadsheet for further analysis.

LuaProfiler is free software and uses the same license as Lua 5.1.

Current version is 2.0.2. It was developed for Lua 5.1.

LuaProfiler can be downloaded from the LuaForge page, or from LuaRocks ("luarocks install
luaprofiler").

Installation

LuaProfiler source is distributed as a group of C files and some makefile templates.

LuaProfiler follows the package model for Lua 5.1, therefore it should be "installed" in your package.path.

Windows users can use the pre-compiled version of LuaProfiler (profiler.dll) available at LuaForge.
