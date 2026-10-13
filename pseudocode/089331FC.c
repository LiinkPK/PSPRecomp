/* Entry 0x089331FC | file offset 0x001301D4 | FUN_089331fc | bytes 352 */

int FUN_089331fc(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_70;
  char local_6f;
  char local_6e;
  char local_6d;
  short local_60;
  short local_46;
  short local_44;
  int local_38;
  int local_34;
  int local_2c;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = FUN_08863104(param_1,&local_70,0x54);
  if (((((iVar1 == 0x54) && (local_70 == '\x7f')) && (local_6f == 'E')) &&
      ((local_6e == 'L' && (local_6d == 'F')))) &&
     ((local_60 == -0x58 && ((local_46 == 0x20 && (local_44 == 1)))))) {
    iVar3 = local_34 - local_38;
    iVar2 = local_2c + local_38;
    iVar1 = FUN_08863104(param_1,iVar3,iVar2);
    if (iVar1 == iVar2) {
      iVar2 = local_2c;
      iVar3 = local_34;
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  if ((iVar3 != 0) && (0 < iVar2)) {
    if (0x4000 < iVar2) {
      iVar2 = 0x4000;
    }
    sceKernelIcacheInvalidateRange(iVar3,iVar2);
  }
  sceKernelDcacheWritebackInvalidateAll();
  if (iVar3 != 0) {
    FUN_0893f810(iVar3);
  }
  return iVar3;
}

