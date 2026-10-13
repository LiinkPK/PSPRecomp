/* Entry 0x08934880 | file offset 0x00131858 | FUN_08934880 | bytes 164 */

undefined4 FUN_08934880(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_089d88e4;
  puVar2 = *(undefined4 **)(PTR_DAT_089d88e4 + 0x148);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(PTR_DAT_089d88e4 + 0x14c);
    *(undefined4 **)(PTR_DAT_089d88e4 + 0x148) = puVar2;
    iVar3 = *(int *)(puVar1 + 0x150);
  }
  else {
    iVar3 = puVar2[1];
  }
  if (0x1f < iVar3) {
    puVar2 = (undefined4 *)FUN_08934af4(0x88);
    if (puVar2 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    puVar2[1] = 0;
    *puVar2 = *(undefined4 *)(PTR_DAT_089d88e4 + 0x148);
    *(undefined4 **)(PTR_DAT_089d88e4 + 0x148) = puVar2;
  }
  iVar3 = puVar2[1];
  puVar2[1] = iVar3 + 1;
  puVar2[iVar3 + 2] = param_1;
  return 0;
}

