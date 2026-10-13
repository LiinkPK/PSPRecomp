/* Entry 0x089051E0 | file offset 0x001021B8 | FUN_089051e0 | bytes 272 */

void FUN_089051e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 500)) {
    do {
      iVar2 = param_1 + iVar3 * 0x1c;
      iVar1 = FUN_08935490(iVar2 + 0x34,param_2,6);
      if (iVar1 == 0) {
        iVar3 = *(int *)(iVar2 + 0x4c);
        if (1 < iVar3) {
          if (iVar3 != 3) {
            return;
          }
          *(undefined4 *)(iVar2 + 0x4c) = 4;
          return;
        }
        if (iVar3 < 1) {
          return;
        }
        if (*(int *)(iVar2 + 0x3c) == 0x47534d41) {
          *(undefined4 *)(iVar2 + 0x4c) = 2;
          return;
        }
        FUN_08906964(*(undefined4 *)(param_1 + 4),param_2);
        *(undefined4 *)(iVar2 + 0x4c) = 0;
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 500));
  }
  return;
}

