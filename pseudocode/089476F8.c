/* Entry 0x089476F8 | file offset 0x001446D0 | FUN_089476f8 | bytes 188 */

void FUN_089476f8(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(ushort *)(param_2 + 0x26);
  iVar5 = 0;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x3c) + iVar4) + 0x10);
      if (iVar2 != -1) {
        iVar3 = *(int *)(*(int *)(param_1 + 0xa8) + 0x24);
        (**(code **)(iVar3 + 0x4c))(*(int *)(param_1 + 0xa8) + (int)*(short *)(iVar3 + 0x48),iVar2);
      }
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x3c) + iVar4) + 0x10) = 0xffffffff;
      iVar4 = iVar4 + 4;
    } while (iVar5 < (int)(uint)uVar1);
  }
  return;
}

