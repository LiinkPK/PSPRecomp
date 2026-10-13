/* Entry 0x089055C0 | file offset 0x00102598 | FUN_089055c0 | bytes 136 */

undefined4 FUN_089055c0(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  
  iVar1 = sceNetGetLocalEtherAddr(auStack_20);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceNetAdhocPdpCreate(auStack_20,param_2 & 0xffff,param_3,0);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      *param_1 = iVar1;
      param_1[1] = param_2;
      param_1[2] = param_3;
      uVar2 = 1;
    }
  }
  return uVar2;
}

