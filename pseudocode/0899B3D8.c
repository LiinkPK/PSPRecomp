/* Entry 0x0899B3D8 | file offset 0x001983B0 | FUN_0899b3d8 | bytes 132 */

int FUN_0899b3d8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0899b5c0(param_1,param_2,0,0x41e00000);
  if (iVar1 < 0) {
    iVar1 = FUN_0899a8c8(param_1,param_2);
  }
  else {
    uVar2 = FUN_0899a118(param_1,param_2,0,0xc1e00000);
    iVar1 = FUN_0899a8c8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    iVar1 = iVar1 + -0x80000000;
  }
  return iVar1;
}

