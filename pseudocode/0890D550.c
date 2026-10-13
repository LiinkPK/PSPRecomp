/* Entry 0x0890D550 | file offset 0x0010A528 | FUN_0890d550 | bytes 56 */

undefined4 FUN_0890d550(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x14) < param_2) ||
     (param_2 <= *(int *)(param_1 + 0x14) - (int)*(char *)(param_1 + 0x20))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

