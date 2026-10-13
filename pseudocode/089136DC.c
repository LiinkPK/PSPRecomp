/* Entry 0x089136DC | file offset 0x001106B4 | FUN_089136dc | bytes 32 */

void FUN_089136dc(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x74) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return;
}

