/* Entry 0x088E35FC | file offset 0x000E05D4 | FUN_088e35fc | bytes 200 */

void FUN_088e35fc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar1 = param_1 + 0x6a8;
  do {
    if ((*(char *)(iVar1 + 0x42) != '\0') && (*(char *)(iVar1 + 0x43) != '\0')) {
      *(undefined1 *)(iVar1 + 0x43) = 0;
      iVar3 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar4 = param_1 + iVar3 * 0x44 + 0x6a8;
        do {
          if (*(char *)(iVar4 + 0x42) != '\0') {
            *(undefined1 *)(iVar4 + 0x43) = 1;
            return;
          }
          iVar3 = iVar3 + -1;
          iVar4 = iVar4 + -0x44;
        } while (-1 < iVar3);
      }
      iVar5 = 1;
      iVar4 = param_1 + 0x6ec;
      iVar3 = param_1;
      do {
        if (*(char *)(iVar4 + 0x42) == '\0') {
          *(undefined1 *)(iVar3 + 0x6eb) = 1;
          return;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x44;
        iVar3 = iVar3 + 0x44;
      } while (iVar5 < 4);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x44;
  } while (iVar2 < 4);
  return;
}

