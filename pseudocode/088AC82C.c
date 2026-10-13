/* Entry 0x088AC82C | file offset 0x000A9804 | FUN_088ac82c | bytes 100 */

void FUN_088ac82c(int param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xef8);
  *(uint *)(param_1 + 0xef8) = uVar1 | 6;
  if (param_2 == '\0') {
    uVar1 = uVar1 & 0xffffffbf | 6;
  }
  else {
    uVar1 = uVar1 | 0x46;
  }
  *(uint *)(param_1 + 0xef8) = uVar1;
  FUN_088ac034(param_1,8);
  FUN_088ac07c(param_1,1);
  return;
}

