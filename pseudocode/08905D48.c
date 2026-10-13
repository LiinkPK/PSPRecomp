/* Entry 0x08905D48 | file offset 0x00102D20 | FUN_08905d48 | bytes 144 */

undefined4 FUN_08905d48(int param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  
  iVar1 = sceNetGetLocalEtherAddr(auStack_20);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceNetAdhocPtpListen(auStack_20,param_2,param_3,500000,0x1e,5,0);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      *(int *)(param_1 + 0x2c8) = iVar1;
      uVar2 = 1;
    }
  }
  return uVar2;
}

