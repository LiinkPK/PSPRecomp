/* Entry 0x08900858 | file offset 0x000FD830 | FUN_08900858 | bytes 152 */

void FUN_08900858(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_089d72f0;
  iVar2 = 0;
  if ((DAT_089d72f0 != 0) && (iVar4 = 0, 0 < *(int *)(DAT_089d72f0 + 8))) {
    iVar3 = 0;
    do {
      if ((((short *)(DAT_089d72f4 + iVar3))[7] & 0x10U) != 0) {
        if (param_2 <= iVar2) {
          return;
        }
        iVar2 = iVar2 + 1;
        *param_1 = (int)*(short *)(DAT_089d72f4 + iVar3);
        param_1 = param_1 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar4 < *(int *)(iVar1 + 8));
  }
  return;
}

