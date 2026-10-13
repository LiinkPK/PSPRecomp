/* Entry 0x088716F0 | file offset 0x0006E6C8 | FUN_088716f0 | bytes 40 */

uint FUN_088716f0(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8) & 0xfffffff;
  }
  return uVar1;
}

