/* Entry 0x088B6DDC | file offset 0x000B3DB4 | FUN_088b6ddc | bytes 56 */

void FUN_088b6ddc(int param_1,undefined1 param_2)

{
  undefined1 local_e [10];
  
  local_e[0] = param_2;
  FUN_088b6d34(*(int *)(param_1 + 8),*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8,local_e,0);
  return;
}

