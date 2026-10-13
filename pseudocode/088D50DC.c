/* Entry 0x088D50DC | file offset 0x000D20B4 | FUN_088d50dc | bytes 244 */

void FUN_088d50dc(uint *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = *param_1 | 2;
  if (param_1[4] != 0) {
    iVar1 = FUN_088d3724();
    if (iVar1 == 0) {
      iVar2 = 0;
      iVar1 = 0;
      do {
        if (*(short *)(param_1[9] + param_1[1] * 0x1e + iVar1 + 6) == -1) {
          return;
        }
        if (*(int *)(param_1[5] + iVar1) != 0) {
          FUN_0887b944();
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < 6);
    }
    else if (*(int *)param_1[5] != 0) {
      FUN_0887b944(*(int *)param_1[5]);
    }
  }
  return;
}

