/* Entry 0x089A00F4 | file offset 0x0019D0CC | FUN_089a00f4 | bytes 80 */

uint * FUN_089a00f4(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  uVar1 = (int)puVar2 + (param_1 + 3U & 0xfffffffc) + 8;
  *(uint *)(DAT_09af6830 + 8) = uVar1;
  *puVar2 = ((uVar1 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
  puVar2[1] = uVar1 & 0xffffff | 0x8000000;
  return puVar2 + 2;
}

