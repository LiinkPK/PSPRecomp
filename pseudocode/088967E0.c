/* Entry 0x088967E0 | file offset 0x000937B8 | FUN_088967e0 | bytes 116 */

undefined * FUN_088967e0(undefined4 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  
  ppuVar2 = &PTR_s_one00_089caa10;
  uVar3 = 0;
  do {
    iVar1 = FUN_0893585c(param_1,*ppuVar2);
    if (iVar1 == 0) {
      return ppuVar2[1];
    }
    uVar3 = uVar3 + 1;
    ppuVar2 = ppuVar2 + 2;
  } while (uVar3 < 0x14);
  return (undefined *)0xffffffff;
}

