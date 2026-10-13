/* Entry 0x088A1A80 | file offset 0x0009EA58 | FUN_088a1a80 | bytes 92 */

void FUN_088a1a80(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_20 [4];
  
  puVar1 = local_20;
  local_20[0] = 0x301;
  local_20[1] = 0x300;
  local_20[2] = 0x302;
  iVar2 = 0;
  do {
    sceUtilityLoadModule(*puVar1);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 3);
  return;
}

