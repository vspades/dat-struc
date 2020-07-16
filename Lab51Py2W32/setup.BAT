@echo off

echo|set /p="[1] on-line procedure..."
ping google.com >nul
if %errorlevel% == 1 (
	echo [FAILED] no internet connection found.
	pause
	exit
)
echo done.

echo|set /p="[2] preparing a download-tool..."
copy wget.exe %windir%\system32 /Y /V >/nul
if %errorlevel% == 1 (
	echo [FAILED].
	pause
	exit
)
echo done.

echo|set /p="[3] retrieving [python-2.7.12.msi]..."
wget -c --no-check-certificate https://www.python.org/ftp/python/2.7.12/python-2.7.12.msi -q
echo done.

if exist %windir%\Microsoft.NET\Framework\v3.5 (
	echo [4] FOUND: %windir%\Microsoft.NET\Framework\v3.5
) else (
	echo|set /p="[4] retrieving [dotnetfx35.exe] (action may require restart)..."
	Dism /online /Enable-Feature /FeatureName:"NetFx3" 2>/nul
	if %errorlevel% == 1 (
		wget -c --no-check-certificate http://download.microsoft.com/download/2/0/E/20E90413-712F-438C-988E-FDAA79A8AC3D/dotnetfx35.exe -q
	)
	dotnetfx35.exe
	echo done.
)

echo|set /p="[5] installing [Python-2.7-32]..."
python-2.7.12.msi InstallAllUsers=0 TargetDir=%windir:~0,3%\Python-2.7-32 /quiet
echo done.

echo|set /p="[6] upgrading [pip]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --upgrade pip -q 2>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --upgrade pip -q 2>NUL
if %errorlevel% == 1 (
	echo [FAILED].
	pause
	exit
)
echo done.

echo|set /p="[7] configuring [setuptools<45.0.0]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location -q --upgrade "setuptools<45.0.0"
if %errorlevel% == 1 (
	echo [FAILED].
	pause
	exit
)
echo done.

echo|set /p="[8] installing [pyinstaller==3.1]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location pyinstaller==3.1 -Iv -q 1>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location six -q 1>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location packaging -q 1>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location appdirs -q 1>NUL
if %errorlevel% == 1 (
	echo [FAILED].
	pause
	exit
)
echo done.

echo|set /p="[9] setting up [lab51py2w32]..."
copy "lab51py2w32.BAT" %windir%\system32 /Y /V >/nul
md "%windir:~0,3%\Python-2.7-32/bin"
move "dotnetfx35.exe" "%windir:~0,3%\Python-2.7-32/bin" 2>NUL
move "python-2.7.12.msi" "%windir:~0,3%\Python-2.7-32/bin" 2>NUL
copy "hook-data.py" "%windir:~0,3%\Python-2.7-32/bin" /Y /V >/nul
if %errorlevel% == 1 (
	echo [FAILED].
	pause
	exit
)
echo done.

echo [OK] lab51py2w32 installed.
pause
