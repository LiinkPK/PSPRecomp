/* Entry 0x088D4FE4 | file offset 0x000D1FBC | FUN_088d4fe4 | bytes 248 */

void FUN_088d4fe4(uint *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = *param_1 & 0xfffffffd;
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
          FUN_0887b924();
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < 6);
    }
    else if (*(int *)param_1[5] != 0) {
      FUN_0887b924(*(int *)param_1[5]);
    }
  }
  return;
}

