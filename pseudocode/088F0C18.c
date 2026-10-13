/* Entry 0x088F0C18 | file offset 0x000EDBF0 | FUN_088f0c18 | bytes 104 */

float FUN_088f0c18(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_088f1444();
  if ((iVar1 == param_1) && (iVar1 = FUN_088b6be0(param_1), iVar1 != 0)) {
    iVar1 = FUN_088b6ba0(param_1);
    fVar2 = (float)iVar1 / 100.0;
  }
  else {
    fVar2 = 1.0;
  }
  return fVar2;
}

