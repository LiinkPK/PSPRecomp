/* Entry 0x08857804 | file offset 0x000547DC | FUN_08857804 | bytes 32 */

void FUN_08857804(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + 0x20) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x60;
  } while (iVar1 < 0x28);
  return;
}

