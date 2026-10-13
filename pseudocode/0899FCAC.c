/* Entry 0x0899FCAC | file offset 0x0019CC84 | FUN_0899fcac | bytes 280 */

void FUN_0899fcac(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  if (DAT_09af6d2c != (code *)0x0) {
    (*DAT_09af6d2c)();
  }
  iVar1 = DAT_09af6830;
  puVar4 = *(uint **)(DAT_09af6830 + 8);
  *puVar4 = param_1 | 0xd2000000;
  iVar2 = 4;
  puVar4[1] = ((param_2 & 0xfffffff) >> 0x18) << 0x10 | 0x9d000000 | param_3;
  puVar4[2] = param_2 & 0xffffff | 0x9c000000;
  *(uint **)(iVar1 + 8) = puVar4 + 3;
  puVar3 = &DAT_09af6834;
  do {
    iVar1 = DAT_09af6828;
    iVar2 = iVar2 + -1;
    puVar3[0x28] = DAT_09af6824;
    puVar3[0x29] = iVar1;
    puVar3[0x27] = param_1;
    puVar3 = puVar3 + 0x3f;
  } while (-1 < iVar2);
  DAT_09af680c = param_1;
  DAT_09af6814 = param_2;
  DAT_09af6810 = param_3;
  if ((DAT_09af681c == 0) && (DAT_09af6828 != 0)) {
    DAT_09af681c = param_2 + DAT_09af6828 * param_3 * 4;
  }
  if (DAT_09af6820 == 0) {
    DAT_09af6820 = param_3;
  }
  return;
}

