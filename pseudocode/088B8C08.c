/* Entry 0x088B8C08 | file offset 0x000B5BE0 | FUN_088b8c08 | bytes 240 */

void FUN_088b8c08(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_088b9168(param_1);
  iVar3 = 0;
  iVar2 = *(int *)(DAT_089d72a8 + 8);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      FUN_088b922c(param_1,uVar1,*(undefined4 *)(DAT_089d72b0 + iVar4 + 4),
                   (int)*(short *)(DAT_089d72b0 + iVar4 + 2));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar3 < iVar2);
  }
  iVar2 = *(int *)(DAT_089d72a8 + 0xc);
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      FUN_088b922c(param_1,uVar1,*(undefined4 *)(DAT_089d72b4 + iVar4 + 0x14),
                   *(undefined4 *)(DAT_089d72b4 + iVar4 + 0x10));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < iVar2);
  }
  return;
}

