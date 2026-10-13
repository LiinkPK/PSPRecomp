/* Entry 0x0885A1D8 | file offset 0x000571B0 | FUN_0885a1d8 | bytes 184 */

void FUN_0885a1d8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x3d4);
  if (iVar1 < 0x1e) {
    *(int *)(param_3 + 0x3d4) = iVar1 + 1;
    iVar1 = param_3 + ((*(int *)(param_3 + 0x3d0) + iVar1) % 0x1e) * 0x20 + 0x10;
  }
  else {
    iVar1 = *(int *)(param_3 + 0x3d0);
    *(int *)(param_3 + 0x3d0) = iVar1 + 1;
    iVar1 = param_3 + iVar1 * 0x20 + 0x10;
    if (0x1d < *(int *)(param_3 + 0x3d0)) {
      *(undefined4 *)(param_3 + 0x3d0) = 0;
    }
  }
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  FUN_089a3868(iVar1,param_5);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  return;
}

