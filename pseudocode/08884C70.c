/* Entry 0x08884C70 | file offset 0x00081C48 | FUN_08884c70 | bytes 584 */

void FUN_08884c70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    iVar3 = *(int *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 4);
    if ((iVar3 != 0) && (iVar3 != 0)) {
      *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x8000;
      if (*(int *)(iVar1 + 0x34) == 0) {
        *(int *)(iVar1 + 0x34) = iVar3;
        *(int *)(iVar1 + 0x30) = iVar3;
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        *(undefined4 *)(iVar3 + 0x54) = 0;
        iVar4 = *(int *)(iVar1 + 0x38);
      }
      else {
        *(int *)(*(int *)(iVar1 + 0x34) + 0x4c) = iVar3;
        uVar2 = *(undefined4 *)(iVar1 + 0x34);
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        *(undefined4 *)(iVar3 + 0x54) = uVar2;
        iVar4 = *(int *)(iVar1 + 0x38);
        *(int *)(iVar1 + 0x34) = iVar3;
      }
      *(int *)(iVar1 + 0x38) = iVar4 + 1;
      iVar1 = *(int *)(param_1 + 4);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    if ((iVar3 != 0) && (iVar3 != 0)) {
      *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x8000;
      if (*(int *)(iVar1 + 0x34) == 0) {
        *(int *)(iVar1 + 0x34) = iVar3;
        *(int *)(iVar1 + 0x30) = iVar3;
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        *(undefined4 *)(iVar3 + 0x54) = 0;
        iVar4 = *(int *)(iVar1 + 0x38);
      }
      else {
        *(int *)(*(int *)(iVar1 + 0x34) + 0x4c) = iVar3;
        uVar2 = *(undefined4 *)(iVar1 + 0x34);
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        *(undefined4 *)(iVar3 + 0x54) = uVar2;
        iVar4 = *(int *)(iVar1 + 0x38);
        *(int *)(iVar1 + 0x34) = iVar3;
      }
      *(int *)(iVar1 + 0x38) = iVar4 + 1;
      iVar1 = *(int *)(param_1 + 4);
      iVar3 = *(int *)(param_1 + 0xc);
    }
    iVar4 = *(int *)(param_1 + 0x14) * 10;
    if (iVar3 != 0) {
      FUN_088da0a8(iVar1,*(undefined2 *)(&DAT_089c9f8e + iVar4),auStack_60,auStack_20);
      FUN_0887b778(*(undefined4 *)(param_1 + 0xc),auStack_60);
      FUN_0887b828(*(undefined4 *)(param_1 + 0xc),auStack_20);
      iVar1 = *(int *)(param_1 + 4);
      iVar4 = *(int *)(param_1 + 0x14) * 10;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_088da0a8(iVar1,*(undefined2 *)(&DAT_089c9f90 + iVar4),auStack_60,auStack_20);
      FUN_0887b778(*(undefined4 *)(param_1 + 0x10),auStack_60);
      FUN_0887b828(*(undefined4 *)(param_1 + 0x10),auStack_20);
      iVar1 = *(int *)(param_1 + 4);
      iVar4 = *(int *)(param_1 + 0x14) * 10;
    }
    if (((int)*(short *)(iVar1 + 0xc) == (uint)*(ushort *)(&DAT_089c9f8c + iVar4)) &&
       ((*(ushort *)(iVar1 + 0x20) & 0x20) != 0)) {
      if (iVar1 != 0) {
        FUN_088da060();
        *(undefined4 *)(param_1 + 4) = 0;
      }
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_0887ba5c();
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_0887ba5c();
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return;
}

