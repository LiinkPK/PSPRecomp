/* Entry 0x088953F0 | file offset 0x000923C8 | FUN_088953f0 | bytes 48 */

void FUN_088953f0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x100);
  FUN_08866aa8(uVar1 & 0xff,uVar1 >> 8 & 0xff,uVar1 >> 0x10 & 0xff);
  return;
}

