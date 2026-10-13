/* Entry 0x088847E4 | file offset 0x000817BC | FUN_088847e4 | bytes 180 */

void FUN_088847e4(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  if ((iVar1 == 0) && (*param_1 != 0)) {
    iVar1 = FUN_088daa68(*param_1);
    param_1[3] = iVar1;
  }
  if (iVar1 != 0) {
    iVar2 = param_1[6] * 0xc;
    param_1[7] = param_1[7] | 1;
    if (param_2 == '\0') {
      FUN_088d9f5c(iVar1,*(undefined2 *)(&DAT_089c9f70 + iVar2),1);
      *(undefined2 *)(param_1[3] + 0xe) = *(undefined2 *)(&DAT_089c9f72 + iVar2);
    }
    else {
      FUN_088d9f5c(iVar1,*(undefined2 *)(&DAT_089c9f72 + iVar2),1);
    }
  }
  return;
}

