/* Entry 0x088FD0A0 | file offset 0x000FA078 | FUN_088fd0a0 | bytes 628 */

void FUN_088fd0a0(int param_1,char param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  FUN_088d3cf0(*(int *)(param_1 + 0x30) + 0x65c,*(int *)(param_1 + 0x30) + 0xa5c,&DAT_089ccfac);
  iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0xaac);
  if (param_2 == '\0') {
    *(undefined2 *)(iVar3 + 0xe) = 7;
    iVar3 = *(int *)(param_1 + 0x30);
    sVar1 = *(short *)(iVar3 + *(int *)(iVar3 + 0x10a4) * 0x1c + 0x20);
  }
  else {
    FUN_088d9f5c(iVar3,7,1);
    iVar3 = *(int *)(param_1 + 0x30);
    sVar1 = *(short *)(iVar3 + *(int *)(iVar3 + 0x10a4) * 0x1c + 0x20);
  }
  FUN_088d46e4(iVar3 + 0x10e8,0,0,sVar1 + -1,0,0xffffffff);
  puVar4 = (uint *)(*(int *)(param_1 + 0x30) + 0x10e8);
  *puVar4 = *puVar4 | 1;
  puVar4 = (uint *)(*(int *)(param_1 + 0x30) + 0x10e8);
  *puVar4 = *puVar4 & 0xfffffff7;
  FUN_0887b924(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf24));
  iVar3 = *(int *)(param_1 + 0x30);
  iVar5 = iVar3 + *(int *)(iVar3 + 0x10a4) * 0x1c;
  if (*(int *)(iVar3 + 0xf28) != 0) {
    FUN_0887ba5c(*(int *)(iVar3 + 0xf28));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf28) = 0;
    iVar3 = *(int *)(param_1 + 0x30);
  }
  if (*(int *)(iVar3 + 0xf2c) != 0) {
    FUN_0887ba5c(*(int *)(iVar3 + 0xf2c));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf2c) = 0;
    iVar3 = *(int *)(param_1 + 0x30);
  }
  uVar2 = FUN_0887b3ec(*(undefined4 *)(iVar3 + 0xedc),*(undefined4 *)(iVar3 + 0xee0),0,
                       (int)*(short *)(iVar5 + 0x22),0,0);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf28) = uVar2;
  uVar2 = FUN_0887e534(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf28));
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf2c) = uVar2;
  iVar3 = *(int *)(param_1 + 0x30);
  if (*(int *)(iVar3 + 0xf38) != 0) {
    FUN_0887ba5c(*(int *)(iVar3 + 0xf38));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf38) = 0;
    iVar3 = *(int *)(param_1 + 0x30);
  }
  if (1 < *(short *)(iVar5 + 0x20)) {
    FUN_0887b924(*(undefined4 *)(iVar3 + 0xf3c));
    uVar2 = FUN_0887e534(*(undefined4 *)
                          (*(int *)(param_1 + 0x30) + *(short *)(iVar5 + 0x20) * 4 + 0xf3c));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf38) = uVar2;
    iVar3 = *(int *)(param_1 + 0x30);
  }
  if (*(byte *)(iVar5 + 0x1b) == 0xff) {
    FUN_088d9cfc(*(undefined4 *)(iVar3 + 0xab0));
  }
  else {
    FUN_088d0984(DAT_089d7830,*(undefined4 *)(iVar3 + 0x668),*(undefined1 *)(iVar3 + 0xee4),
                 *(int *)(iVar3 + 0xee8) + (uint)*(byte *)(iVar5 + 0x1b) & 0xffff);
    FUN_088d9cd8(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xab0));
  }
  FUN_088fd314(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 8) = 5;
  FUN_088fbe60(param_1);
  FUN_088fc378(param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10a4));
  return;
}

