import ctypes
lib = ctypes.cdll.LoadLibrary("D:\\Schaeffler_Projects\\Learning_material_projectQT\\pythonbindings_ctype_example1\\Dll2\\x64\\Debug\\DLL2.dll") 
lib.hello()
lib.hello1()