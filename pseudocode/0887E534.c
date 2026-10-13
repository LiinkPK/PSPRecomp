/* Entry 0x0887E534 | file offset 0x0007B50C | FUN_0887e534 | bytes 252 */

undefined4 * FUN_0887e534(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_089d6998;
  puVar5 = (undefined4 *)**(undefined4 **)(DAT_089d6998 + 0x6e40);
  **(undefined4 **)(DAT_089d6998 + 0x6e40) = 0;
  *(undefined4 *)(iVar1 + 0x6e40) = *(undefined4 *)(*(int *)(iVar1 + 0x6e40) + 4);
  FUN_08935524(puVar5,param_1,0x58);
  if ((*(uint *)(param_1 + 0x10) & 0x2000) == 0) {
    FUN_0887a524(*puVar5);
  }
  else {
    FUN_0887d67c(*(undefined4 *)(DAT_089d6998 + 0xf2c0),*puVar5);
  }
  iVar1 = DAT_089d6998;
  puVar4 = (undefined4 *)(DAT_089d6998 + 0x168);
  if (*(int *)(DAT_089d6998 + 0x16c) == 0) {
    *(undefined4 **)(DAT_089d6998 + 0x16c) = puVar5;
    *puVar4 = puVar5;
    puVar5[0x12] = 0;
    puVar5[0x14] = 0;
    iVar2 = *(int *)(iVar1 + 0x170);
  }
  else {
    *(undefined4 **)(*(int *)(DAT_089d6998 + 0x16c) + 0x48) = puVar5;
    uVar3 = *(undefined4 *)(iVar1 + 0x16c);
    puVar5[0x12] = 0;
    puVar5[0x14] = uVar3;
    iVar2 = *(int *)(iVar1 + 0x170);
    *(undefined4 **)(iVar1 + 0x16c) = puVar5;
  }
  *(int *)(iVar1 + 0x170) = iVar2 + 1;
  return puVar5;
}

