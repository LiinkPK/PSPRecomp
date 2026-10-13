/* Entry 0x0892F9A0 | file offset 0x0012C978 | FUN_0892f9a0 | bytes 372 */

void FUN_0892f9a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  
  iVar2 = *(int *)(param_1 + 0x148);
  if ((iVar2 != 0) &&
     ((pcVar3 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14),
      iVar2 = (*pcVar3)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar3,4,0), iVar2 != 0 ||
      (iVar2 = *(int *)(*(int *)(param_1 + 0x148) + 0x34), pcVar3 = *(code **)(iVar2 + 0x14),
      iVar2 = (*pcVar3)(*(int *)(param_1 + 0x148) + (int)*(short *)(iVar2 + 0x10),pcVar3,8,0),
      iVar2 != 0)))) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x148) + 0x34);
    pcVar3 = *(code **)(iVar2 + 0x14);
    iVar2 = (*pcVar3)(*(int *)(param_1 + 0x148) + (int)*(short *)(iVar2 + 0x10),pcVar3,8,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x148) + 0x34);
      pcVar3 = *(code **)(iVar2 + 0x14);
      iVar2 = (*pcVar3)(*(int *)(param_1 + 0x148) + (int)*(short *)(iVar2 + 0x10),pcVar3,4,0);
      if (iVar2 != 0) {
        FUN_088d4bf4(1);
      }
    }
    else {
      FUN_088d4bf4(2);
    }
    uVar1 = FUN_0892ece0(param_1 + 0x3c);
    local_20 = (undefined1)uVar1;
    puVar4 = *(undefined1 **)(param_1 + 0x14c);
    uStack_1f = (undefined1)((uint)uVar1 >> 8);
    uStack_1e = (undefined1)((uint)uVar1 >> 0x10);
    *puVar4 = local_20;
    uStack_1d = (undefined1)((uint)uVar1 >> 0x18);
    puVar4[1] = uStack_1f;
    puVar4[2] = uStack_1e;
    puVar4[3] = uStack_1d;
    FUN_0892f73c(param_1);
  }
  return;
}

