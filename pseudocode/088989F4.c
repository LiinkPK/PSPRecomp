/* Entry 0x088989F4 | file offset 0x000959CC | FUN_088989f4 | bytes 112 */

int FUN_088989f4(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x70) == 0) || (iVar1 = FUN_08898654(param_1,param_2), iVar1 < 0)) {
    iVar1 = -1;
  }
  else {
    *(undefined2 *)(*(int *)(param_1 + 0x70) + iVar1 * 0x4c + 0x22) = param_3;
  }
  return iVar1;
}

