/* Entry 0x088EA3D4 | file offset 0x000E73AC | FUN_088ea3d4 | bytes 208 */

void FUN_088ea3d4(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_50 [64];
  
  uVar1 = *param_2;
  if (uVar1 < 0x385) {
    if (uVar1 < 900) {
      return;
    }
  }
  else {
    if (uVar1 != 0x388) {
      return;
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar2 = 0;
    do {
      local_50[iVar4] = *(undefined1 *)((int)param_2 + iVar2 + iVar3 * 4 + 8);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar2 < 4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  FUN_0893476c(param_1 + 1,"data/movie/%s",local_50);
  *param_1 = 1;
  return;
}

