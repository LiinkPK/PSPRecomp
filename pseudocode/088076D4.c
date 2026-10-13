/* Entry 0x088076D4 | file offset 0x000046AC | FUN_088076d4 | bytes 180 */

void FUN_088076d4(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = 0;
  puVar1 = &DAT_09af84f0;
  do {
    if (-1 < *(short *)(puVar1 + 5)) {
      local_20 = puVar1[2];
      local_1c = puVar1[3];
      local_18 = puVar1[4];
      local_14 = 0;
      FUN_08808ae8(*puVar1,(int)*(short *)(puVar1 + 5),puVar1[1],&local_20,
                   *(char *)((int)puVar1 + 0x16) != '\0');
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 6;
  } while (iVar2 < 0x20);
  FUN_0880766c();
  return;
}

