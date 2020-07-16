@echo off

if [%1] == [] (
	%windir:~0,3%\Python-2.7-32/python.exe %2
)

if %1 == --pkg (
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location %2 -q 1>NUL
)

if %1 == --ipython (
	%windir:~0,3%\Python-2.7-32/Scripts/ipython
)

if %1 == --build (
	%windir:~0,3%\Python-2.7-32/Scripts/pyinstaller --additional-hooks-dir="%windir:~0,3%\Python-2.7-32/bin/hook-data.py" --onefile %2
)

if %1 == --help (
	echo Lab51Py2W32 -- in-line shell for Python-2 developers.
	echo contact: https://github.com/vspades
	echo .
	echo [PATTERN] lab51py2w32 --help
	echo displays this help.
	echo .
	echo [PATTERN] lab51py2w32 --ipython
	echo provides an interactive IPython shell.
	echo .
	echo [PATTERN] lab51py2w32 --pkg `PyPI-package'
	echo retrieves and installs a package from PyPI.org repo.
	echo .
	echo [PATTERN] lab51py2w32 --build `python-script(.py)'
	echo builds an EXEcutable (binary) file.
	echo .
	echo [PATTERN] lab51py2w32 --mod `cython-script(.pyx)'
	echo makes a (.so) extension.
	echo provides a `sample.pyx' script.
)
