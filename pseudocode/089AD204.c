/* Entry 0x089AD204 | file offset 0x001AA1DC | FUN_089ad204 | bytes 204 */

void FUN_089ad204(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
  puVar1 = (undefined4 *)FUN_089ab5ec(0,0x10,0x20);
  iVar2 = (int)DAT_09af719c;
  *puVar1 = 0x5c808080;
  puVar1[1] = 0x5d0000ff;
  *(undefined4 **)(param_1 + 8) = puVar1;
  puVar1[2] = 0xb000000;
  puVar1[6] = 1;
  puVar1[4] = 0xff808080;
  puVar1[5] = 0xff808080;
  puVar1[3] = 0;
  puVar1[7] = 0;
  if (iVar2 != 0) {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 0x1c);
    } while (iVar2 != 0);
    *(undefined4 **)(iVar3 + 0x1c) = puVar1;
    return;
  }
  DAT_09af719c = puVar1;
  return;
}

