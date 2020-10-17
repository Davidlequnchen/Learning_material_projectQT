import ctypes
import os

CUR_PATH=os.path.dirname(__file__)
dllPath=os.path.join(CUR_PATH,"Project1.dll")

# dllPath = 'd:\\Schaeffler_Projects\\Learning_material_projectQT\\Project1\\Debug\\Project1.dll'


print (dllPath)

#print Project1
# pDll=ctypes.WinDLL(dllPath)
pDll=ctypes.cdll.LoadLibrary(dllPath)
print (pDll)

pResutl= pDll.sum(1,4)
pResult2=pDll.sub(1,4)
print (pResutl)
print (pResult2)