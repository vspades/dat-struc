@echo off

echo|set /p="[1] checking for any internet connections..."
ping google.com >nul
if %errorlevel% == 1 (
	echo [FAILED] no internet connection found.
	pause
	exit
)
echo done.

echo|set /p="[2] preparing required tools..."
copy "lab51py2w32.BAT" %windir%\system32 /Y /V 1>NUL 2>NUL
md "%windir:~0,3%\Python-2.7-32/bin" 1>NUL 2>NUL
move "dotnetfx35.exe" "%windir:~0,3%\Python-2.7-32/bin" 1>NUL 2>NUL
move "python-2.7.12.msi" "%windir:~0,3%\Python-2.7-32/bin" 1>NUL 2>NUL
copy "hook-data.py" "%windir:~0,3%\Python-2.7-32/bin" /Y /V 1>NUL 2>NUL
copy "wget.exe" %windir%\system32 /Y /V 1>NUL 2>NUL
copy "help.txt" "%windir:~0,3%\Python-2.7-32/bin" /Y /V 1>NUL 2>NUL
if %errorlevel% == 1 (
	echo [FAILED].
	pause
	exit
)
echo done.

echo|set /p="[3] retrieving [python-2.7.12.msi]..."
wget -c --no-check-certificate https://www.python.org/ftp/python/2.7.12/python-2.7.12.msi -q 1>NUL 2>NUL
echo done.

if exist %windir%\Microsoft.NET\Framework\v3.5 (
	echo [4] FOUND: %windir%\Microsoft.NET\Framework\v3.5
) else (
	echo|set /p="retrieving [dotnetfx35.exe]..."
	Dism /online /Enable-Feature /FeatureName:"NetFx3" 1>NUL 2>NUL
	if %errorlevel% == 1 (
		wget -c --no-check-certificate http://download.microsoft.com/download/2/0/E/20E90413-712F-438C-988E-FDAA79A8AC3D/dotnetfx35.exe 1>NUL 2>NUL -q
		echo installing [dotnetfx35] (action may require restart)...
		dotnetfx35.exe 1>NUL 2>NUL
		set /p ans="<WINDOWS UPDATE> needs a restart. continue? [y|n]: "
		if %ans% == y (
			shutdown /r /f /t 4
		) else if %ans% == n (
			echo install cancelled by user.
			pause
			exit
		) else (
			echo user chose to restart later.
			pause
			exit
		)
	)
	echo done.
)

echo|set /p="[5] installing [Python-2.7-32]..."
python-2.7.12.msi InstallAllUsers=0 TargetDir=%windir:~0,3%\Python-2.7-32 /quiet 1>NUL 2>NUL
echo done.

echo|set /p="[6] upgrading [pip]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location --upgrade pip -q 1>NUL 2>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --upgrade pip -q 1>NUL 2>NUL
if %errorlevel% == 1 (
	echo [FAILED].
	pause
	exit
)
echo done.

echo|set /p="[7] configuring [setuptools<45.0.0]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location -q --upgrade "setuptools<45.0.0" 1>NUL 2>NUL
if %errorlevel% == 1 (
	echo [FAILED].
	pause
	exit
)
echo done.

echo|set /p="[8] installing [pyinstaller==3.1]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location pyinstaller==3.1 -Iv -q 1>NUL 2>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location six -q 1>NUL 2>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location packaging -q 1>NUL 2>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location appdirs -q 1>NUL 2>NUL
if %errorlevel% == 1 (
	echo [FAILED].
	pause
	exit
)
echo done.

echo [OK] lab51py2w32 installed.
pause
