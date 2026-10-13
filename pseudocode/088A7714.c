/* Entry 0x088A7714 | file offset 0x000A46EC | FUN_088a7714 | bytes 84 */

void FUN_088a7714(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0xdc) & 1) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc0) + 0x7c);
    if ((((uVar1 & 0x100) != 0) && ((uVar1 & 0x80) == 0)) && (*(int *)(param_1 + 0xf8) != param_3))
    {
      FUN_088a7890();
    }
  }
  return;
}

