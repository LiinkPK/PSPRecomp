/* Entry 0x088A1F94 | file offset 0x0009EF6C | FUN_088a1f94 | bytes 40 */

void FUN_088a1f94(int param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 == '\x01') {
    uVar1 = *(uint *)(param_1 + 0x34) | 0x20;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x34) & 0xffffffdf;
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  return;
}

