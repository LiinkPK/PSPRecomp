/* Entry 0x089A10F4 | file offset 0x0019E0CC | FUN_089a10f4 | bytes 72 */

void FUN_089a10f4(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_1 | 0xd8000000;
  *(uint **)(iVar1 + 8) = puVar2 + 3;
  puVar2[1] = param_2 & 0xffffff | 0xd9000000;
  puVar2[2] = param_3 & 0xffffff | 0xda000000;
  return;
}

