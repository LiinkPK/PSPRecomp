/* Entry 0x0881A9C8 | file offset 0x000179A0 | FUN_0881a9c8 | bytes 72 */

undefined1 FUN_0881a9c8(int param_1,int *param_2)

{
  undefined1 uVar1;
  
  if (*param_2 == 1) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x10) + param_2[1] * 0xc + 8);
  }
  else {
    uVar1 = *(int *)(*(int *)(param_1 + 8) + param_2[1] * 4) != 0;
  }
  return uVar1;
}

