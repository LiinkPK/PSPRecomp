/* Entry 0x088892E8 | file offset 0x000862C0 | FUN_088892e8 | bytes 384 */

void FUN_088892e8(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(DAT_089d6a10 + 0x4c) != 9) {
    *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_1 + 0x7bc);
    uVar2 = FUN_08889b08(param_1);
    *(undefined4 *)(param_1 + 0x7bc) = uVar2;
    iVar3 = FUN_08889468(param_1,*(undefined4 *)(param_1 + 0x7b8));
    iVar4 = FUN_08889468(param_1,*(undefined4 *)(param_1 + 0x7bc));
    if (iVar3 != iVar4) {
      iVar4 = 0;
      iVar3 = param_1;
      do {
        if ((*(int *)(iVar3 + 0x38) != 0) &&
           (iVar5 = *(int *)(*(int *)(iVar3 + 0x38) + 0x5a0), iVar5 != 0)) {
          FUN_08871bc4(iVar5);
          FUN_08871bd0(iVar5);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 2);
    }
    iVar4 = 0;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 0x38) != 0) {
        iVar5 = *(int *)(*(int *)(iVar3 + 0x38) + 0x5a0);
        iVar6 = param_1 + iVar4;
        if (iVar5 != 0) {
          *(undefined1 *)(iVar6 + 0x7c0) = *(undefined1 *)(iVar6 + 0x7c2);
          uVar1 = (**(code **)(*(int *)(iVar5 + 0x34) + 0x34))
                            (iVar5 + *(short *)(*(int *)(iVar5 + 0x34) + 0x30));
          *(undefined1 *)(iVar6 + 0x7c2) = uVar1;
          if (*(char *)(iVar6 + 0x7c2) != *(char *)(iVar6 + 0x7c0)) {
            FUN_08871bc4(iVar5);
            FUN_08871bd0(iVar5);
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 2);
  }
  return;
}

