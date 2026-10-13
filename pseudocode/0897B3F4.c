/* Entry 0x0897B3F4 | file offset 0x001783CC | FUN_0897b3f4 | bytes 364 */

void FUN_0897b3f4(undefined4 param_1,uint *param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  if ((*param_2 & 1) == 0) {
    bVar1 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar3 = param_2[0x23];
    iVar4 = *(int *)(param_4 + 0xc);
    puVar2 = *(undefined1 **)
              (*(int *)(uVar3 + 0x48) + (uint)*(ushort *)(*(int *)(param_2[0x24] + 8) + 2) * 4);
    FUN_08946ac4(0x3f800000,param_2,uVar3,*(undefined4 *)(uVar3 + 0x50),*puVar2,puVar2[1],puVar2[2],
                 auStack_a0);
    FUN_089a3fb8(auStack_60,DAT_089da278,auStack_a0);
    FUN_0898400c(*(undefined4 *)(param_3 + 0x50),*(float *)(param_3 + 0x54) * 2.0,iVar4,iVar4 + 0x40
                 ,param_2,auStack_60);
    FUN_089841e4(*(undefined4 *)(param_3 + 0x54),iVar4 + 0x60,iVar4 + 0xa0,iVar4 + 0xc0,
                 iVar4 + 0x100,iVar4,param_2,auStack_60);
    FUN_0897bb34(iVar4 + 0x120,iVar4 + 0x140,param_3,param_2);
    FUN_0897bcc8(iVar4 + 0x160,iVar4 + 0x180,iVar4 + 0x120,iVar4 + 0x140,param_3,param_2);
  }
  return;
}

