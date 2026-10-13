/* Entry 0x08870098 | file offset 0x0006D070 | FUN_08870098 | bytes 188 */

undefined4 FUN_08870098(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088716c8(DAT_089d5ff0);
  FUN_0886fd08(param_1,param_2,param_3);
  DAT_09b26bb8 = 1;
  iVar1 = FUN_08870154(param_1);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    sceKernelWaitThreadEndCB(DAT_089d5fbc,0);
    uVar2 = DAT_09b26b2c;
  }
  return uVar2;
}

