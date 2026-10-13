/* Entry 0x0881A934 | file offset 0x0001790C | FUN_0881a934 | bytes 148 */

bool FUN_0881a934(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_2 == 1) {
    piVar3 = (int *)(*(int *)(param_1 + 0x10) + param_2[1] * 0xc);
    iVar2 = 0;
    if (0 < *piVar3) {
      do {
        if (*(int *)(piVar3[1] + iVar2 * 4) == param_3) {
          return true;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *piVar3);
    }
    bVar1 = false;
  }
  else {
    bVar1 = param_2[1] == param_3;
  }
  return bVar1;
}

