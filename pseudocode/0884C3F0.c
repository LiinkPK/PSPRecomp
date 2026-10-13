/* Entry 0x0884C3F0 | file offset 0x000493C8 | FUN_0884c3f0 | bytes 132 */

int FUN_0884c3f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2588);
  *(int *)(param_1 + 0x2588) = iVar1 + 1;
  iVar1 = param_1 + iVar1 * 0x40;
  *(int *)(param_1 + 0x2588) = *(int *)(param_1 + 0x2588) % 0x96;
  if (*(int *)(param_1 + 0x2580) < 0x96) {
    *(int *)(param_1 + 0x2580) = *(int *)(param_1 + 0x2580) + 1;
  }
  else {
    FUN_0884c4a8(param_1,iVar1);
    *(undefined4 *)(param_1 + 0x2584) = *(undefined4 *)(param_1 + 0x2588);
  }
  return iVar1;
}

