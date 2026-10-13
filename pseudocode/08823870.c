/* Entry 0x08823870 | file offset 0x00020848 | FUN_08823870 | bytes 228 */

void FUN_08823870(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x394) + 0xc);
  iVar6 = ((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
  iVar5 = 0;
  iVar4 = 0;
  if (0 < iVar6) {
    do {
      iVar3 = *(int *)(param_1 + 0x28) + iVar4;
      if ((*(byte *)(iVar3 + 299) & 2) == 0) {
        iVar1 = FUN_089b0e78(uVar7,*(undefined1 *)(iVar3 + 0x128));
        if (iVar1 == 0) {
          FUN_089a3ebc(iVar3);
        }
        else {
          uVar2 = FUN_089b1224();
          FUN_089a3efc(iVar3,uVar2);
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x130;
    } while (iVar5 < iVar6);
  }
  return;
}

