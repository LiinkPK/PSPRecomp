/* Entry 0x08970128 | file offset 0x0016D100 | FUN_08970128 | bytes 128 */

void FUN_08970128(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = &DAT_09b6f498;
  puVar1 = &DAT_09b6f998;
  iVar3 = 0;
  do {
    *puVar2 = 0;
    *puVar1 = 0;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar3 < 0x140);
  DAT_089da288 = 0xffffffff;
  DAT_089da278 = &DAT_09af0640;
  DAT_089da27c = &DAT_09af0680;
  DAT_089da280 = &DAT_09af06c0;
  DAT_089da284 = &DAT_09af0700;
  return;
}

