/* Entry 0x08912674 | file offset 0x0010F64C | FUN_08912674 | bytes 336 */

void FUN_08912674(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  *(short *)(param_1 + 0x240) = (short)param_2;
  iVar1 = FUN_08910644(param_2);
  *(undefined2 *)(param_1 + 0x242) = *(undefined2 *)(iVar1 + 0xe);
  iVar2 = FUN_089107cc((int)*(short *)(iVar1 + 6));
  uVar3 = FUN_08899300();
  uVar4 = FUN_08897dec(uVar3,(int)*(short *)(iVar2 + 2));
  FUN_089a34c0(param_1 + 0x244,uVar4);
  uVar3 = FUN_08897e48(uVar3,(int)*(short *)(iVar2 + 2));
  FUN_089a34c0(param_1 + 0x250,uVar3);
  uVar3 = *(undefined4 *)(param_1 + 0x264);
  if ((*(uint *)(iVar1 + 8) & 2) == 0) {
    uVar6 = *(uint *)(param_1 + 0x260) & 0xfffffff7;
    *(undefined4 *)(param_1 + 0x264) = uVar3;
    *(uint *)(param_1 + 0x260) = uVar6;
    uVar5 = *(uint *)(iVar1 + 8);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x260) | 8;
    *(undefined4 *)(param_1 + 0x264) = uVar3;
    *(uint *)(param_1 + 0x260) = uVar6;
    uVar5 = *(uint *)(iVar1 + 8);
  }
  if ((uVar5 & 8) == 0) {
    *(undefined4 *)(param_1 + 0x264) = uVar3;
    *(uint *)(param_1 + 0x260) = uVar6 & 0xffffffef;
  }
  else {
    *(undefined4 *)(param_1 + 0x264) = uVar3;
    *(uint *)(param_1 + 0x260) = uVar6 | 0x10;
  }
  return;
}

