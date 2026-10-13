/* Entry 0x08992734 | file offset 0x0018F70C | FUN_08992734 | bytes 76 */

undefined4 FUN_08992734(int param_1)

{
  undefined4 uVar1;
  
  if (((*(char *)(param_1 + 0x41) == '\0') || (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x38)))
     || (*(char *)(param_1 + 0x40) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

