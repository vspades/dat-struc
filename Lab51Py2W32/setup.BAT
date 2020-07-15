@echo off

echo|set /p="[1] on-line procedure..."
ping google.com >nul
if %errorlevel% == 1 (
	echo .
	echo [FAILED] no Internet connection.
	pause
	exit
)
echo done.

echo|set /p="[2] preparing required tools..."
copy wget.exe %windir%\system32 /Y /V >/nul
if %errorlevel% == 1 (
	echo .
	echo [FAILED] not able to copy [wget] into [%windir%\system32].
	pause
	exit
)
echo done.

echo|set /p="[2] retrieving [python-2.7.12.msi]..."
wget -c https://www.python.org/ftp/python/2.7.12/python-2.7.12.msi -q
echo done.

if exist %windir%\Microsoft.NET\Framework\v3.5 (
	echo [3] FOUND: %windir%\Microsoft.NET\Framework\v3.5
) else (
	echo|set /p="[3] retrieving [dotnetfx35.exe]..."
	Dism /online /Enable-Feature /FeatureName:"NetFx3" 2>/nul
	if %errorlevel% == 1 (
		wget -c http://download.microsoft.com/download/2/0/E/20E90413-712F-438C-988E-FDAA79A8AC3D/dotnetfx35.exe -q
	)
	echo done.
)

echo|set /p="[4] installing [Python-2.7-32]..."
python-2.7.12.msi InstallAllUsers=0 TargetDir=%windir:~0,3%\Python-2.7-32 /quiet
echo done.

echo|set /p="[5] upgrading [pip]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning -q --upgrade pip
if %errorlevel% == 1 (
	echo .
	echo [FAILED] interrupted internet connection?
	pause
	exit
)
echo done.

echo|set /p="[6] configuring [setuptools<45.0.0]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning -q --upgrade "setuptools<45.0.0"
if %errorlevel% == 1 (
	echo .
	echo [FAILED] interrupted internet connection?
	pause
	exit
)
echo done.

echo|set /p="[7] installing [pyinstaller==3.1]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning -q --no-warn-script-location -Iv pyinstaller==3.1 1>NUL
if %errorlevel% == 1 (
	echo .
	echo [FAILED] interrupted internet connection?
	pause
	exit
)
echo done.

echo|set /p="[8] sending [lab51py2w32.BAT] to [%windir%\system32]..."
copy lab51py2w32.BAT %windir%\system32 /Y /V >/nul
if %errorlevel% == 1 (
	echo .
	echo [FAILED] not able to copy [lab51py2w32.BAT] into [%windir%\system32].
	pause
	exit
)
echo done.

echo [OK] lab51py2w32 installed successfully.
pause