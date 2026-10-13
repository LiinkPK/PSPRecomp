/* Entry 0x08895FE4 | file offset 0x00092FBC | FUN_08895fe4 | bytes 144 */

void FUN_08895fe4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = iVar1 + 0x10;
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      do {
        if (*(int *)(iVar3 + 0x14) == 0) {
          FUN_088a2664(0,*(undefined4 *)(iVar3 + 4));
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x1c;
      } while (iVar2 < *(int *)(*param_1 + 8));
    }
  }
  return;
}

