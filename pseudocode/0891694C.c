/* Entry 0x0891694C | file offset 0x00113924 | FUN_0891694c | bytes 284 */

undefined4 FUN_0891694c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  short *psVar4;
  short *psVar5;
  
  puVar3 = (undefined4 *)0x0;
  do {
    do {
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(DAT_089d4960 + 8);
      }
      else {
        puVar3 = (undefined4 *)puVar3[0x3a];
      }
      if (puVar3 == (undefined4 *)0x0) {
        return 0;
      }
      psVar4 = (short *)*puVar3;
      psVar5 = psVar4 + 0x12;
      bVar1 = false;
      if (((char)*psVar5 == 'P') && (bVar1 = false, *(char *)((int)psVar4 + 0x25) == '_')) {
        bVar1 = true;
      }
    } while (!bVar1);
    iVar2 = FUN_089359e8(psVar5);
    bVar1 = false;
    if ((*(char *)((int)psVar5 + iVar2 + -2) == '_') &&
       (bVar1 = false, *(char *)((int)psVar5 + iVar2 + -1) == 'A')) {
      bVar1 = true;
    }
  } while ((bVar1) || ((int)*psVar4 == *(int *)(param_1 + 0x6cc)));
  FUN_0888a2b4(0xffffffff,0);
  return 1;
}

