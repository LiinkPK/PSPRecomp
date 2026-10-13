/* Entry 0x089063A0 | file offset 0x00103378 | FUN_089063a0 | bytes 152 */

undefined4 FUN_089063a0(int param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar1 = sceNetGetLocalEtherAddr(auStack_20);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceNetAdhocPtpOpen(auStack_20,param_2,param_1 + 4,param_2,param_3,500000,0x1e,0);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      *(int *)(param_1 + 0xc) = iVar1;
      uVar2 = 1;
    }
  }
  return uVar2;
}

