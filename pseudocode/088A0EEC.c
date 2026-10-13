/* Entry 0x088A0EEC | file offset 0x0009DEC4 | FUN_088a0eec | bytes 312 */

int FUN_088a0eec(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(*param_2 + 0x14))
                      ((int)param_2 + (int)*(short *)(*param_2 + 0x10),param_1 + iVar2 * 0x30);
    if (iVar1 == 1) {
      param_1 = param_1 + iVar2 * 0x30;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 3) == -1) {
      iVar2 = (**(code **)(*param_2 + 0xc))
                        ((int)param_2 + (int)*(short *)(*param_2 + 8),param_1 + iVar1 * 0x30);
      if (iVar2 == 1) {
        return iVar1;
      }
      return -1;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar1 * 0x10;
  } while (iVar1 < 0x20);
  return -1;
}

