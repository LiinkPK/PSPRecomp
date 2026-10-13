/* Entry 0x089A0330 | file offset 0x0019D308 | FUN_089a0330 | bytes 84 */

void FUN_089a0330(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = ((param_1 & 0xfffffff) >> 0x18) << 0x10 | 0x9f000000 | param_2;
  *(uint **)(iVar1 + 8) = puVar2 + 2;
  puVar2[1] = param_1 & 0xffffff | 0x9e000000;
  DAT_09af6820 = param_2;
  DAT_09af681c = param_1;
  return;
}

