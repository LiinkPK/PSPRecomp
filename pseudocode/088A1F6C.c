/* Entry 0x088A1F6C | file offset 0x0009EF44 | FUN_088a1f6c | bytes 40 */

void FUN_088a1f6c(int param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 == '\x01') {
    uVar1 = *(uint *)(param_1 + 0x34) | 0x10;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x34) & 0xffffffef;
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  return;
}

