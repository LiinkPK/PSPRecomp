/* Entry 0x088E9544 | file offset 0x000E651C | FUN_088e9544 | bytes 300 */

void FUN_088e9544(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_088e9704(param_1,2);
  iVar2 = param_1 + 0x1874;
  FUN_088d727c(iVar2);
  FUN_088d73b4(iVar2);
  FUN_088d72e8(iVar2,0x21,0xffffffff,0,0,0);
  if (*(int *)(param_1 + 0x1864) == 4) {
    FUN_088d72e8(iVar2,0x3a,0xffffffff,0,0,0);
  }
  else {
    FUN_088d72e8(iVar2,0x20,0xffffffff,0,0,0);
  }
  FUN_088d73f4(iVar2,1);
  uVar1 = FUN_088729a0(0);
  FUN_088d743c(iVar2,uVar1,0,0,0);
  FUN_088ce72c(param_1 + 0x1af0);
  FUN_088a28e8(0,1);
  FUN_088965f4(DAT_089d6ae8,1);
  FUN_088a3f2c(1);
  FUN_088e699c(param_1 + 0x1340);
  if (*(char *)(param_1 + 0x13f0) != '\0') {
    FUN_088ea4d8(param_1 + 0x13ec);
  }
  return;
}

