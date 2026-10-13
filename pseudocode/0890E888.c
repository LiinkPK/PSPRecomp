/* Entry 0x0890E888 | file offset 0x0010B860 | FUN_0890e888 | bytes 192 */

undefined * FUN_0890e888(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_089d8360 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_09b6b3e0;
    iVar4 = 0;
    do {
      uVar1 = FUN_0890e9bc();
      *puVar3 = uVar1;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 4);
    FUN_08906bdc(&DAT_09b69cf0);
    DAT_089d8364 = &DAT_09b69cf0;
    FUN_08906c98(&DAT_09b69cf0,DAT_089d8360,DAT_09b6b3e0,DAT_09b6b3e4,DAT_09b6b3e8,DAT_09b6b3ec);
    puVar2 = DAT_089d8364;
  }
  return puVar2;
}

