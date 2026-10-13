/* Entry 0x089064B0 | file offset 0x00103488 | FUN_089064b0 | bytes 148 */

undefined4 FUN_089064b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sceNetAdhocPtpConnect(param_1[3],10000000,1);
  if (iVar1 == 0) {
    param_1[0xc] = 1;
    uVar2 = 1;
  }
  else {
    if ((iVar1 != -0x7fbef8f7) && (iVar1 == -0x7fbef8e8)) {
      (**(code **)(*param_1 + 0x14))((int)param_1 + (int)*(short *)(*param_1 + 0x10));
    }
    uVar2 = 0;
  }
  return uVar2;
}

