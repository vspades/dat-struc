@echo off

if [%1] == [] (
	type %windir:~0,3%\Python-2.7-32\bin\help.txt
	pause
	exit
)

if %1 == --pkg (
	%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location %2 -q
	pause
	exit
)

if %1 == --ipython (
	%windir:~0,3%\Python-2.7-32/Scripts/ipython
	pause
	exit
)

if %1 == --build (
	if exist dist (
		echo [FAILED] folder ^<dist^> exists.
		pause
		exit
	)
	if exist build (
		echo [FAILED] folder ^<build^> exists.
		pause
		exit
	)
	if exist *.spec (
		echo [FAILED] file ^<*.spec^> exists.
		pause
		exit
	)
	echo|set /p="[1] building an EXEcutable (binary) file..."
	%windir:~0,3%\Python-2.7-32/Scripts/pyinstaller --additional-hooks-dir=^"%windir:~0,3%\Python-2.7-32/bin/hook-data.py^" --onefile %2 1>NUL 2>NUL
	if %errorlevel% == 1 (
		echo [FAILED] check out ^<build/name/warn-name.txt^> log.
		pause
		exit
	) else (
		rmdir /S /Q build 2>NUL
		del *.spec /Q /F 2>NUL
		echo done.
	)
	if exist dist (
		echo [OK] an EXEcutable app built inside ^<dist^> folder.
	) else (echo [FAILED] no argument^(s^) supplied.)
	pause
	exit
)

%windir:~0,3%\Python-2.7-32/python.exe %1
pause
